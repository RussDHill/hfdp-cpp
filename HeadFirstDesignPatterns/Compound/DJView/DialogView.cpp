// DialogView.cpp : implementation file
//

#include "stdafx.h"
#include "DJTestDrive.h"
#include "DialogView.h"


// DialogView dialog

IMPLEMENT_DYNAMIC(DialogView, CDialog)

DialogView::DialogView(CWnd* pParent /*=NULL*/)
	: CDialog(DialogView::IDD, pParent)
{

}

DialogView::~DialogView()
{
}

void DialogView::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DialogView, CDialog)
END_MESSAGE_MAP()


// DialogView message handlers

void DialogView::updateBPM()
{
	CEdit* pEdit = (CEdit*) GetDlgItem(IDC_EDIT_BPM);

	if (model != NULL) {
		int bpm = model->getBPM();
		if (bpm == 0) {
			pEdit->SetWindowText("offline");
		} else {
			int bpm = model->getBPM();
			char buffer[20];
			_itoa_s(bpm, buffer, 20, 10);
			pEdit->SetWindowText(buffer);
		}
	}
}
  
void DialogView::updateBeat()
{
	CProgressCtrl* pProgressCtrl = (CProgressCtrl*) GetDlgItem(IDC_BEAT_BAR);
	pProgressCtrl->SetPos(100);

	int wait = 25;
	HANDLE waitEvent = CreateEvent(0, TRUE, FALSE, NULL);
	WaitForSingleObject(waitEvent, wait);
	CloseHandle(waitEvent);

	pProgressCtrl->SetPos(0);
}

void DialogView::setModel(shared_ptr<BeatModelInterface> model)
{
	this->model = model;
	model->registerObserver((BPMObserver*)this);
	model->registerObserver((BeatObserver*)this);
}

void DialogView::PostNcDestroy()
{
	__super::PostNcDestroy();
	model->removeObserver((BPMObserver*)this);
	model->removeObserver((BeatObserver*)this);
	delete this;
}
