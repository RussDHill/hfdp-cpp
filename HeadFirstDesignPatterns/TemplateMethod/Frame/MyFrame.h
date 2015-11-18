
// MyFrame.h : main header file for the MyFrame application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyFrameApp:
// See MyFrame.cpp for the implementation of this class
//

class CMyFrameApp : public CWinApp
{
public:
	CMyFrameApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMyFrameApp theApp;
