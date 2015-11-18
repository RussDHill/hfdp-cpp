// Tree.cpp : implementation of the Tree class
//

#include "stdafx.h"
#include "Tree.h"

Tree::Tree()
{

}

Tree::~Tree()
{

}

void Tree::display(CPaintDC& dc, int x, int y, int age)
{
	CBrush brushGreen(RGB(0, 255, 0));

	int d = 20 + (age/2);

	CRect rcEllipse(CPoint(x, y), CSize(d, d));
	CRgn rgnEllipse;

	rgnEllipse.CreateEllipticRgnIndirect(&rcEllipse);
	dc.FillRgn(&rgnEllipse, &brushGreen);
}
