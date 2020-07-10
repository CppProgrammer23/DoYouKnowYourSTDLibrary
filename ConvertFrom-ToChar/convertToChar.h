#include <iostream>
#include <string_view>
#include <charconv>
#include <array>
#include <type_traits>
//1 #pragma warning (disable:4996)  //activate 1 and 2 if you're using the second version
//2 #include <stdlib.h>

//convert from arithmetic to chars
template<typename T, std::enable_if_t<std::is_arithmetic_v<T>, bool> = true>
[[maybe_unused]] void to_char_res(std::array<char, 10> str, T val)
{
	if (auto [p, ec] = std::to_chars(str.data(), str.data() + str.size(), val);ec == std::errc())
		std::cout << "the string is: " << std::string_view(str.data(), p - str.data());
	
	//2nd version
	/*if(std::is_integral_v<T>)
		sprintf(str, "%d", val);
	else
		sprintf(str, "%.5f", val);*/

}
