#include "Price.h"

price::price()
{
	cout << "price constructor called" << endl;
	nextPtr = nullptr;
}

string price::getProduct()
{
	return prop[PRODUCT];
}
string price::getStore()
{
	return prop[STORE];
}
string price::getPrice()
{
	return prop[PRICE];
}
price* price::getNextPtr()
{
	return nextPtr;
}

void price::setProduct(string str)
{
	prop[PRODUCT] = str;
}
void price::setStore(string str)
{
	prop[STORE] = str;
}
void price::setPrice(string str)
{
	prop[PRICE] = str;
}
void price::setNextPtr(price* p)
{
	nextPtr = p;
}
