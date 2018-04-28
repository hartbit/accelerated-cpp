#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter a first number: ";
    int firstNumber;
    std::cin >> firstNumber;

	std::cout << "Please enter a second number: ";
    int secondNumber;
    std::cin >> secondNumber;

	std::cout << "The largest number is: ";
	std::cout << std::max(firstNumber, secondNumber);
	std::cout << std::endl;
}