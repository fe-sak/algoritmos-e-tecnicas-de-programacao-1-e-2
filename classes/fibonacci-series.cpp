#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	unsigned long long beforeElement;
	unsigned long long element;
	
	unsigned long long numberOfElements;
	
	cout << "Digite quantos elementos deseja calcular para a sequência de Fibonacci: ";
	cin >> numberOfElements;
	
	if (numberOfElements == 0) {
		cout << "0";
		return 0;
	}
	
	if (numberOfElements == 1) {
		cout << "1";
		return 0;
	}
	
	cout << "0\n1\n";	
		
	beforeElement = 0;
	element = 1;
	
	
	for ( unsigned i = 2; i < numberOfElements ; i++) {
		 element = element + beforeElement;
		 beforeElement = element;
		 
		 cout << element << "\n";
	}	
	
	return 0;
}
