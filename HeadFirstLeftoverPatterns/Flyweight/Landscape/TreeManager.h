#pragma once

class TreeManager  
{
public:
	void addTree(int x, int y, int age);
	void displayTrees(CPaintDC& dc);
	TreeManager();
	virtual ~TreeManager();
private:
	vector<int> trees;
};
