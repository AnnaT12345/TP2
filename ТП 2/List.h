#pragma once
#include "price.h"
#include <string>

template <typename T>
void mcin(T* _x);

class myList
{
	int size = 0;
	price* HEAD;
	price* LAST;
	bool a_to_z_flag;

	price* operator[](int idx);
	void sort();

public:

	myList();

	void flipFlag();
	void seeFlag();
	void bestPrice();

	void add();
	void print();
	void del();
	void edit();
	void findStore();
	
};