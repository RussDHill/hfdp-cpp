#pragma once

class Duck
{
public:
	static bool compareTo(shared_ptr<Duck> first, shared_ptr<Duck> second);
	string toString() const;
	Duck(const string& name, int weight);
	virtual ~Duck();
private:
	int duckWeight;
	string duckName;

	Duck(const Duck&);
	Duck& operator=(const Duck&);
};
