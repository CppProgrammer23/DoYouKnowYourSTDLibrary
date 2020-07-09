#include <iostream>
#include <string_view>
#include <charconv>
#include <array>


//convert from arithmetic to chars
template<typename T, std::enable_if_t<std::is_arithmetic_v<T>, bool> = true>
[[maybe_unused]] void to_char_res(std::array<char, 10> str, T val)
{
	if (auto [p, ec] = std::to_chars(str.data(), str.data() + str.size(), val);ec == std::errc())
		std::cout << "the string is: " << std::string_view(str.data(), p - str.data());
}
