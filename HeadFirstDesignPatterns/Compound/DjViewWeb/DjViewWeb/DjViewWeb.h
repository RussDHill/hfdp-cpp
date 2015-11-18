// DjViewWeb.h : Defines the ATL Server request handler class
//
#pragma once

#include "IFace.h"

class BeatModelInterface;

class CDjViewWebHandler
	: public CRequestHandlerT<CDjViewWebHandler>
{
private:
	BeatModelInterface* model;

	// Session service support
//	CComPtr<ISessionStateService> m_spSessionSvc;
//	CComPtr<ISession> m_spSession;

protected:
	// Put protected members here

public:
	// Put public members here

	// TODO: Add additional tags to the replacement method map
	BEGIN_REPLACEMENT_METHOD_MAP(CDjViewWebHandler)
		REPLACEMENT_METHOD_ENTRY("BPM", bpm)
	END_REPLACEMENT_METHOD_MAP()

	HTTP_CODE ValidateAndExchange()
	{
		int err = 0;

		if (model == NULL) {
			model = new BeatModel();
			err = model->initialize();
		}
		
		// Set the content-type
		m_HttpResponse.SetContentType("text/html");

		// uncomment the service initialization(s) if you want to use
		// a service that was generated with your ISAPI extension
		

		// Get the ISessionStateService from the ISAPI extension
//		if (FAILED(m_spServiceProvider->QueryService(__uuidof(ISessionStateService), 
//						&m_spSessionSvc)))
//			return HTTP_FAIL;

		if (err != 0)
		{
			string errStr = model->getError(err);
			m_HttpResponse << errStr.c_str();
			return HTTP_SUCCESS;
		}
		
		return HTTP_SUCCESS;
	}
 
protected:
	HTTP_CODE bpm(void)
	{
		const CHttpRequestParams& FormFields = m_HttpRequest.GetFormVars();
		
		PCSTR pszName = FormFields.Lookup("name");
		PCSTR pszBpm = FormFields.Lookup("bpm");

		char szBpm[MAX_PATH] = {0};

		int nBpm = model->getBPM();

		if (pszName) {
			if (strcmp(pszName, "set") == 0) {
				if (pszBpm) {
					nBpm = atoi(pszBpm);
				} else {
					nBpm = 90;
				}
				model->setBPM(nBpm);
				_itoa_s(nBpm, szBpm, MAX_PATH, 10);
			} else if (strcmp(pszName, "<<") == 0) {
				nBpm--;
				model->setBPM(nBpm);
				_itoa_s(nBpm, szBpm, MAX_PATH, 10);
			} else if (strcmp(pszName, ">>") == 0) {
				nBpm++;
				model->setBPM(nBpm);
				_itoa_s(nBpm, szBpm, MAX_PATH, 10);
			} else if (strcmp(pszName, "on") == 0) {
				model->on();
				nBpm = model->getBPM();
				_itoa_s(nBpm, szBpm, MAX_PATH, 10);
			} else if (strcmp(pszName, "off") == 0) {
				model->off();
				lstrcpy(szBpm, "offline");
			}
		} else {
			lstrcpy(szBpm, "offline");
		}

		m_HttpResponse << szBpm;

		return HTTP_SUCCESS;
	}

}; // class CDjViewWebHandler
