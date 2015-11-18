#include "StdAfx.h"
#include "ImageIcon.h"

ImageIcon::ImageIcon()
{

}

ImageIcon::~ImageIcon()
{

}

void ImageIcon::Initialize(const string& file, BOOL isFile)
{
	iconFile = file;

	image = 0;

	if (isFile) {
		WCHAR wideFile[MAX_PATH] = {0};
		MultiByteToWideChar(CP_ACP, 0, iconFile.c_str(), -1, wideFile, MAX_PATH);
		image = new Image(wideFile);
	} else {

		string tempFile = getTempDirFile(iconFile);

		WIN32_FIND_DATA ffd;
		if (FindFirstFile(tempFile.c_str(), &ffd) == INVALID_HANDLE_VALUE) {
			HRESULT hResult = URLDownloadToFile(NULL, file.c_str(), tempFile.c_str(), 0, NULL);
		}

		WCHAR wideFile[MAX_PATH] = {0};
		MultiByteToWideChar(CP_ACP, 0, tempFile.c_str(), -1, wideFile, MAX_PATH);
		image = new Image(wideFile);
	}
}

void ImageIcon::paintIcon(HWND hWnd)
{
	HDC hdc = GetDC(hWnd);
	Graphics* graphics = new Graphics(hdc);
	graphics->DrawImage(image, 60, 10);

	if (image) {
		delete graphics;
	}
}

bool ImageIcon::isReady(const string& file)
{
	string tempFile = getTempDirFile(file);

	WIN32_FIND_DATA ffd;
	if (FindFirstFile(tempFile.c_str(), &ffd) == INVALID_HANDLE_VALUE) {
		return false;
	}
	return true;
}

string ImageIcon::getTempDirFile(const string& file)
{
	TCHAR url[MAX_PATH] = {0};
	lstrcpy(url, file.c_str());

	TCHAR tempFile[MAX_PATH] = {0};
	PTSTR temp;
	temp = _tgetenv(__T("TEMP"));
	lstrcpy(tempFile, temp);

	temp = _tcsrchr(url, __T('/'));
	temp = _tcsinc(temp);
	lstrcat(tempFile, __T("\\"));
	lstrcat(tempFile, temp);

	string tempDirFile(tempFile);

	return tempDirFile;
}

