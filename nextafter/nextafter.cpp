#include <iostream>
#include <cmath>


int main()
{
	float res = 0.1f;
	// let's build this interval ]0..1[
	while (res < 1.f)
	{
		res = std::nextafter(res, 1.f);
		std::cout << res << std::endl;
	}
	return 0;
}
/* here what I wanted to show is: we can use std::nextafter to generate an interval, if we start from 0, it will be a very large interval and it will take much long time.
    I just started from 0 (excluded) to be more speedy, even with that start, it will make a large time. I'd use this only to generate small interval like ]0..0.2[ */
