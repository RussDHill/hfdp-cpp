
// DJTestDrive.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

class BeatModelInterface;
class ControllerInterface;

// DJTestDriveApp:
// See DJTestDrive.cpp for the implementation of this class
//

class DJTestDriveApp : public CWinAppEx
{
public:
	DJTestDriveApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
private:
	shared_ptr<BeatModelInterface> model;
	shared_ptr<ControllerInterface> controller;
};

extern DJTestDriveApp theApp;