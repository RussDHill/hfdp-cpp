#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

class IWidget;

// Interfaces
class IDirector
{
public:
	virtual void onEvent(weak_ptr<IWidget> widget) = 0;
	virtual ~IDirector(){};
};

class IWidget : public enable_shared_from_this<IWidget>
{
public:
	virtual void onEvent() = 0;
	IWidget(IDirector* director) :widgetDirector(director) {};
	virtual ~IWidget(){};
protected:
	IDirector* widgetDirector;
};

