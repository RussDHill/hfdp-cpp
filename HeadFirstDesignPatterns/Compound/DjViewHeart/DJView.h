
// DJView.h : header file
//

#pragma once

#include "IFace.h"

class BeatModelInterface;
class ControllerInterface;
class DialogView;

// DJView dialog
class DJView : public CDialog
{
// Construction
public:
	void enableStopMenuItem();
	void disableStopMenuItem();
	void enableStartMenuItem();
	void disableStartMenuItem();
	void setController(shared_ptr<ControllerInterface> controller);
	void setModel(shared_ptr<BeatModelInterface> model);
	DJView(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_DJTESTDRIVE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	afx_msg void OnBnClickedSet();
	afx_msg void OnBnClickedIncrease();
	afx_msg void OnBnClickedDecrease();
	afx_msg void OnStart();
	afx_msg void OnStop();
	afx_msg void OnQuit();

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	DialogView* m_pDlg;
	shared_ptr<BeatModelInterface> model;
	shared_ptr<ControllerInterface> controller;
	CMenu menu;
};
