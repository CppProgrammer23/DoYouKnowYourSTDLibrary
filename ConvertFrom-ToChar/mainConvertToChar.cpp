#include "convertToChar.h"


int main()
{

	int val = 17247;
	std::array<char, 10> str{};
	to_char_res(str, val);
	
	// or directly this without need to "convertToChar.h"
	/*if (auto [p, ec] = std::to_chars(str.data(), str.data() + str.size(), val); ec == std::errc())
		std::cout << "the string is: " << std::string_view(str.data(), p - str.data()); */
	
	//2nd version
	int val = 1724;
	char str1[15];
	to_char_res(str1, val);
	std::cout << "the value in string is: " << str1;

	return 0;
}
