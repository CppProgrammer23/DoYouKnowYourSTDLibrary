#include "optional.h"
#include <iostream>
#include <map>
#include <string>


std::ostream& operator<<(std::ostream& os, const Point& p)
{
	if(p.x && p.y)
		return os << "The abscissa is: " << *p.x << " and the ordinate is: " << *p.y;
	return os << "maybe empty";
}
std::optional<std::map<std::string, Point>> add_an_item()
{
	int x; int y;
	std::cout << "Enter the first point x and y:";
	std::cin >> x >> y;
	std::optional<int> x_cast = static_cast<std::optional<int>>(x);
	std::optional<int> y_cast = static_cast<std::optional<int>>(y);
	if (x_cast.has_value() && y_cast.has_value())
		return  { { {std::string("The point is: "), Point(x_cast,y_cast)} } }; // the return is made by copy
	return {};
}


template<typename C1,typename C2>
std::ostream& operator<<(std::ostream& os, std::map<C1,C2>it)
{
	os << "{";
	for (const auto [key,value] : it)
		os << key << "->" << ", " << value  ;
	return os << "}";
}

int main()    //it's just a test, you can change it in the order you wish
{
	Point p{ std::nullopt,3 };
	auto p1 = std::make_optional<Point>(2, 5);
	//Point p2 = { 1,9 }; //it won' work bc the constructor is marked explicit

	//std::cout << p;
	if (auto success = add_an_item(); success)
	{
		std::cout << *success;
	}

	return 0;
}
