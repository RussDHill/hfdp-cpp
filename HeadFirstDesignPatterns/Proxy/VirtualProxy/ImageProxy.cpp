#include "StdAfx.h"
#include "ImageProxy.h"
#include "ImageIcon.h"

UINT retrievalThread(LPVOID pParam);
string ImageProxy::proxyUrl = "";
bool ImageProxy::retrieving = false;

ImageProxy::ImageProxy(const string& url)
{
	proxyUrl = url;
}

ImageProxy::~ImageProxy()
{

}

void ImageProxy::paintIcon(HWND hWnd)
{
	HDC hdc = GetDC(hWnd);
	if (ImageIcon::isReady(proxyUrl)) {
		ImageIcon* imageIcon = new ImageIcon();
		imageIcon->Initialize(proxyUrl, FALSE);
		imageIcon->paintIcon(hWnd);
		delete imageIcon;
	} else {
		Graphics* graphics = new Graphics(hdc);

		WCHAR msg[MAX_PATH] = {L"Loading CD cover, please wait..."};
		Gdiplus::Font myFont(L"Arial", 16);
		PointF origin(60.0f, 10.0f);
		SolidBrush blackBrush(Color(255, 0, 0, 0));
		graphics->DrawString(msg, wcslen(msg), &myFont, origin, &blackBrush);

		delete graphics;

		if (!retrieving) {
			retrieving = true;

			thread = AfxBeginThread(retrievalThread, hWnd);
		}
	}
}

void ImageProxy::retrieve(HWND hWnd)
{
	ImageIcon* imageIcon = new ImageIcon();
	imageIcon->Initialize(proxyUrl, FALSE);
	delete imageIcon;
	InvalidateRect(hWnd, NULL, TRUE);
	retrieving = false;
}

UINT retrievalThread(LPVOID pParam)
{
	HWND hWnd = (HWND)pParam;
	ImageProxy::retrieve(hWnd);
	
	return 0;
}
