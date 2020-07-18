#ifndef _OPTIONAL_H
#define _OPTIONAL_H

class Point
{
	std::optional<int> x; 
	std::optional<int> y;
	friend std::ostream& operator<<(std::ostream& os, const Point& p);
public:
	Point():Point(0,0){}
	explicit Point(std::optional<int> x, std::optional<int> y) { this->x = x; this->y = y; }

};

#endif
