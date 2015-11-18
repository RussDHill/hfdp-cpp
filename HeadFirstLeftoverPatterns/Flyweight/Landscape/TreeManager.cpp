// TreeManager.cpp: implementation of the TreeManager class.
//

#include "stdafx.h"
#include "TreeManager.h"
#include "Tree.h"

TreeManager::TreeManager()
{

}

TreeManager::~TreeManager()
{

}

void TreeManager::displayTrees(CPaintDC& dc)
{
	Tree tree;
	int i = 0;
	int x = 0;
	int y = 0;
	int age = 0;
	vector<int>::iterator it;
	for (it=trees.begin();it!=trees.end();++it) {
		i++;
		switch (i)
		{
			case 1:
				x = *it;
				break;
			case 2:
				y = *it;
				break;
			case 3:
				age = *it;
				tree.display(dc, x, y, age);
				i = 0;
				break;
		}
	}
}

void TreeManager::addTree(int x, int y, int age)
{
	trees.push_back(x);
	trees.push_back(y);
	trees.push_back(age);
}