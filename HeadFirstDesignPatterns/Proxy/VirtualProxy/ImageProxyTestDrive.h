
// ImageProxyTestDrive.h : main header file for the ImageProxyTestDrive application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CImageProxyTestDriveApp:
// See ImageProxyTestDrive.cpp for the implementation of this class
//

class CImageProxyTestDriveApp : public CWinApp
{
public:
	CImageProxyTestDriveApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
private:
	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR gdiplusToken;
};

extern CImageProxyTestDriveApp theApp;
