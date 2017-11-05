//Fibonacci
#include <iostream>

long fibonacci(unsigned int n);
						  
int main() {

	long double result;
	long number;
				
	std::cout << "Enter an integer:";
	std::cin >> number;


	result = fibonacci(number);


	std::cout <<std::endl << "Fibonacci " << result << std::endl;
	return 0; 
}

long fibonacci(unsigned int n) {


	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}