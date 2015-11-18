#pragma once


// DialogView dialog

#include "IFace.h"

class BeatModelInterface;

class DialogView : public CDialog, public BeatObserver, public BPMObserver
{
	DECLARE_DYNAMIC(DialogView)

public:
	void setModel(shared_ptr<BeatModelInterface> model);
	virtual void updateBPM();
	virtual void updateBeat();
	DialogView(CWnd* pParent = NULL);   // standard constructor
	virtual ~DialogView();

// Dialog Data
	enum { IDD = IDD_DIALOG_VIEW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void PostNcDestroy();

	DECLARE_MESSAGE_MAP()
private:
	shared_ptr<BeatModelInterface> model;
};
