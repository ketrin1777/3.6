#pragma once
class Counter
{
public:
	Counter();
	Counter(int numb);

	void upCounter();
	void downCounter(); 
	int getCounter(); 

private:
	int countNumb;

};

