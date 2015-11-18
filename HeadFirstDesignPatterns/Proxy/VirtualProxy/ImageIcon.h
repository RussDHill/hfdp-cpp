#pragma once

#include "IFace.h"

class ImageIcon : public Icon
{
public:
	static bool isReady(const string& strFile);
	virtual void paintIcon(HWND hWnd);
	void Initialize(const string& file, BOOL isFile);
	ImageIcon();
	virtual ~ImageIcon();
private:
	static string getTempDirFile(const string& file);
	Image* image;
	string iconFile;
	string tempIconFile;

	DISABLE_COPY_AND_ASSIGN(ImageIcon)
};
