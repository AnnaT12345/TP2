#include <iostream>
#include <string>

#define PRODUCT 0
#define STORE 1
#define PRICE 2

using namespace std;



class price
{
	string prop[3];
	price* nextPtr;

public:

	price();

	string getProduct();
	string getStore();
	string getPrice();
	price* getNextPtr();

	void setProduct(string str);
	void setStore(string str);
	void setPrice(string str);
	void setNextPtr(price* p);

	friend std::ostream& operator<<(std::ostream& os, const price& p)
	{
		return os << "Product name: " << p.prop[PRODUCT] << "\nStore name: " << p.prop[STORE] << "\nProduct value: " << p.prop[PRICE] << endl;
	}

	friend std::istream& operator>>(std::istream& in, price& p)
	{
		std::cout << "Product name: ";
		in.clear();
		in.ignore();
		getline(in, p.prop[PRODUCT]);

		std::cout << "Store name: ";
		in.clear();
		getline(in, p.prop[STORE]);

		std::cout << "Product value: ";
		
		string str;
		while (1) {
			std::cin >> str;
			if (!str.empty() && str.find_first_not_of("0123456789") == std::string::npos) {
				p.prop[PRICE] = str;
				break;
			}
			else {
				cout << "Error input , please repeat input (Only numbers)\n";
				continue;
			}
		}
		in.clear();
		in.ignore();

		in.sync();

		return in;
	}

};
