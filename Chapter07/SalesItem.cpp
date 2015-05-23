#include "SalesItem.h"


ostream & Sales_item::getName(ostream & out) const{
	out << name;
	return out;
}

istream & Sales_item::input(istream & in){
	double price;
	cin >> name>>price>>units_sold >>price;
	if (cin){
		revenue = price * units_sold;
	}
	return in;
}

double Sales_item::avg_price() const {
	return revenue / units_sold;
	
}

double Sales_item::gross_avg(const Sales_item & a, const Sales_item & b) const
{
	return (a.revenue + b.revenue) / (a.units_sold + b.units_sold);
}
Sales_item Sales_item::add(const Sales_item &a){
	revenue += a.revenue;
	units_sold += a.units_sold;
	return *this;
}


