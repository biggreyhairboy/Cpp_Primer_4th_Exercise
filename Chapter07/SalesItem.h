#include <string>
#include <iostream>

using namespace std;

class Sales_item{
public:
	Sales_item::Sales_item() : units_sold(0), revenue(0.0){}
	ostream & getName(ostream & out) const;
	istream & input(istream & in);
	double avg_price() const;
	double gross_avg(const Sales_item & a, const Sales_item & b) const;
	Sales_item add(const Sales_item &a);
private:
	string name;
	double price;
	double units_sold;
	double revenue;
};