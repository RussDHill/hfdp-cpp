
// ChildView.cpp : implementation of the CChildView class
//

#include "stdafx.h"
#include "ImageProxyTestDrive.h"
#include "ChildView.h"
#include "ImageProxy.h"

#ifdef _DEBUG
//#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_COMMAND(IDM_AMBIENT, &CChildView::OnAmbient)
	ON_COMMAND(IDM_BUDDA, &CChildView::OnBudda)
	ON_COMMAND(IDM_IMA, &CChildView::OnIma)
	ON_COMMAND(IDM_KARMA, &CChildView::OnKarma)
	ON_COMMAND(IDM_MCMXC, &CChildView::OnMcmxc)
	ON_COMMAND(IDM_NORTH, &CChildView::OnNorth)
	ON_COMMAND(IDM_SELECTED, &CChildView::OnSelected)
END_MESSAGE_MAP()



// CChildView message handlers

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	lstrcpy(url, __T("http://images.amazon.com/images/P/B00009XBYK.01.LZZZZZZZ.jpg"));

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting	GetSafeHwnd()

	ImageProxy* imageProxy = new ImageProxy(url);
	imageProxy->paintIcon(GetSafeHwnd());
	delete imageProxy;
	
	// Do not call CWnd::OnPaint() for painting messages
}


void CChildView::OnAmbient()
{
	//lstrcpy(url, __T("http://images.amazon.com/images/P/B000003S2K.01.LZZZZZZZ.jpg"));
	lstrcpy(url, __T("http://ecx.images-amazon.com/images/I/714dLvJC-7L._SY355_PJautoripBadge,BottomRight,4,-40_OU11__.jpg"));
	CWnd::InvalidateRect(NULL, TRUE);
}

void CChildView::OnBudda()
{
	lstrcpy(url, __T("http://images.amazon.com/images/P/B00009XBYK.01.LZZZZZZZ.jpg"));
	CWnd::InvalidateRect(NULL, TRUE);
}

void CChildView::OnIma()
{
	lstrcpy(url, __T("http://images.amazon.com/images/P/B000005IRM.01.LZZZZZZZ.jpg"));
	CWnd::InvalidateRect(NULL, TRUE);
}

void CChildView::OnKarma()
{
	lstrcpy(url, __T("http://images.amazon.com/images/P/B000005DCB.01.LZZZZZZZ.jpg"));
	CWnd::InvalidateRect(NULL, TRUE);
}

void CChildView::OnMcmxc()
{
	lstrcpy(url, __T("http://images.amazon.com/images/P/B000002URV.01.LZZZZZZZ.jpg"));
	CWnd::InvalidateRect(NULL, TRUE);
}

void CChildView::OnNorth()
{
	lstrcpy(url, __T("http://images.amazon.com/images/P/B000003SFN.01.LZZZZZZZ.jpg"));
	CWnd::InvalidateRect(NULL, TRUE);
}

void CChildView::OnSelected()
{
	//lstrcpy(url, __T("http://images.amazon.com/images/P/B000002MNZ.01.LZZZZZZZ.jpg"));
	lstrcpy(url, __T("http://ecx.images-amazon.com/images/I/51t7TFUjDSL._SX425_.jpg"));
	CWnd::InvalidateRect(NULL, TRUE);
}
