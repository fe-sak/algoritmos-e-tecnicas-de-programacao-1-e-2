#include <iostream>
#include <locale.h>
#include <cmath>

int main() {
	setlocale(LC_ALL, "");
	double element;
	double sum = 0;
	
	double numerator;
	int alternating;
	double denominator;
	
	for ( int i = 0; i < 10 ; i++) {
		numerator = i + 2;
		alternating = ((i + 2) % 2) == 0 ? 1 : -1 ;
		denominator = pow(2, i);
		
		element = (numerator * alternating) / denominator;
		
		std::cout << numerator * alternating << "/" << denominator << " = ";
		std::cout << element << "\n";
		sum += element;
	}
	
	std::cout << "\nSum of all elements: " << sum;		
	
}
