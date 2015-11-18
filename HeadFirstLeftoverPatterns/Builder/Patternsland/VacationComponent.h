#pragma once

class VacationComponent  
{
public:
	VacationComponent();
	virtual ~VacationComponent();
	virtual void add(shared_ptr<VacationComponent> vacationComponent);
	virtual void removeComp(shared_ptr<VacationComponent> vacationComponent);
	virtual shared_ptr<VacationComponent> getChild(int i);
	virtual string getName();
	virtual string getDescription();
	virtual string getDate();
	virtual double getPrice();
	virtual void print();
	virtual void getVacationComponents(vector< shared_ptr<VacationComponent> >& vec);
private: 
	VacationComponent(const VacationComponent&); 
	VacationComponent& operator=(const VacationComponent&);
};

