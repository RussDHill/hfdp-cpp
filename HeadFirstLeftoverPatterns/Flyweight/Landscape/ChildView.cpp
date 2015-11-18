// ChildView.cpp : implementation of the CChildView class
//

#include "stdafx.h"
#include "LandscapeTestDrive.h"
#include "ChildView.h"
#include "TreeManager.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChildView

CChildView::CChildView()
{
	treeManager = shared_ptr<TreeManager>(new TreeManager());
	for(int x=20;x<300;x=x+40) {
		for(int y=20;y<500;y=y+40) {
			treeManager->addTree(x, y, 20);
		}
	}
	for(int x=700;x<1000;x=x+40) {
		for(int y=20;y<500;y=y+40) {
			treeManager->addTree(x, y, 20);
		}
	}
	for(int x=20;x<1000;x=x+40) {
		for(int y=500;y<700;y=y+40) {
			treeManager->addTree(x, y, 20);
		}
	}
}

CChildView::~CChildView()
{
	
}


BEGIN_MESSAGE_MAP(CChildView,CWnd )
	//{{AFX_MSG_MAP(CChildView)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CChildView message handlers

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), HBRUSH(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

	CRect rcHouse(CPoint(325, 325), CSize(350, 150));
	dc.Rectangle(&rcHouse);
	dc.MoveTo(400, 400);
	dc.LineTo(600, 400);
	dc.MoveTo(325, 325);
	dc.LineTo(400, 400);
	dc.LineTo(325, 475);
	dc.MoveTo(675, 325);
	dc.LineTo(600, 400);
	dc.LineTo(675, 475);
	
	treeManager->displayTrees(dc);
}

