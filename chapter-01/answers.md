# Accelerated C++
## Answers to Chapter 2

1-1: The definitions are valid because `+` is left-binding and never tries to concatenate two string literals together.
1-2: The definitions are not valid becaus `+` is left-binding and tries to concatenate two string literals together.
1-3: The program is valid and prints two strings to standard output.
1-4: The program is still valid, both times. In both cases, the nested scope simply shadows the s variable. Inserting a semicolon doesn't change that.
1-5: The program is not valid because the outer scope tries to use the variable `x` from the inner scope.
1-6: The program simply uses the compounded name.