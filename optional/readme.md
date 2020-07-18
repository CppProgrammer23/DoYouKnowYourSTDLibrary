While you can achieve “null-ability” by using unique values (-1, infinity, nullptr), it’s not as clear as the separate wrapper type. 
Alternatively, you could even use std::unique_ptr<Type> and treat the empty pointer as not initialised. 
That works but comes with the cost of allocating memory for the object and is not a recommended technique.
Optional types that come from the functional programming world bring type safety and expressive-ness. Most other languages have something similar: optional<T> in Java...”

Excerpt From: C++17 In Detail
