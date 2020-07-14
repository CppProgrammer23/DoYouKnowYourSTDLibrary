#include <iostream>
#include <cmath>
#include <vector>

// I just took the [0.2133 .. 0.21341[ to see the value of the 2 functions (legrenge1 and legrenge4)

int main()
{
	float res = 0.2133f;
	std::vector<float> Int;
	std::vector<float> Leg1;
	std::vector<float> Leg4;
	while (res < 0.21341f)
	{
		res = std::nextafter(res, 0.21342f);
		Int.push_back(res);
	}
	/*for (auto i : Int)
		std::cout << std::setprecision(7) << i << "\n";*/
	for (auto i : Int)
		Leg1.push_back(std::legendre(1, i));
	for (auto i : Int)
		Leg4.push_back(std::legendre(4, i));
	
	return 0;
}
