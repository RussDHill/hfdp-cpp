#pragma once

#include "IFace.h"

class ImageProxy : public Icon
{
public:
	static bool retrieving;
	static string proxyUrl;
	static void retrieve(HWND hWnd);
	virtual void paintIcon(HWND hWnd);
	ImageProxy(const string& url);
	virtual ~ImageProxy();
private:
	HANDLE thread;
	unsigned int threadId;

	DISABLE_COPY_AND_ASSIGN(ImageProxy)
};
