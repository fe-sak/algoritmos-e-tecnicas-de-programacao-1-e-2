#include <iostream>
#include <locale.h>
#include <cmath>

int main() {
	setlocale(LC_ALL, "");
	double element;
	double sum = 0;
	
	for ( int i = 0; i < 10 ; i++) {
		element = 1.0 / pow(3, i+1);
		std::cout << "1/" << pow(3, i+1) << " = " << element <<"\n";
		sum += element;
	}
	
	std::cout << "\nSum of all elements: " << sum;		
	
}
