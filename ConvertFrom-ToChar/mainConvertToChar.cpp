#include "convertToChar.h"


int main()
{

	int val = 17247;
	std::array<char, 10> str{};
	to_char_res(str, val);
	
	// or directly this:
	/*if (auto [p, ec] = std::to_chars(str.data(), str.data() + str.size(), val); ec == std::errc())
		std::cout << "the string is: " << std::string_view(str.data(), p - str.data()); */

	return 0;
}
