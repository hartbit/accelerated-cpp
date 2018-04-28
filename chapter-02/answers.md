# Accelerated C++
## Answers to Chapter 2

2-6: This code prints all numbers from 1 to 10.
2-10: The first use of `std::` in `using std::cout;` makes the `cout` function available in the scope of the while body. The second and first use of `std::` in `std::count << std::endl` are required because we are out of the scope of the while's body.