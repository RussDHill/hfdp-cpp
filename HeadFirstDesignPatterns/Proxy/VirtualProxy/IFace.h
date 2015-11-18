#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

#include "stdafx.h"

// Interface
class Icon
{
public:
	virtual void paintIcon(HWND hWnd) = 0;
	virtual ~Icon() {}
};