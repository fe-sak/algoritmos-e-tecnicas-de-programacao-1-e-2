#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Informe três valores inteiros diferentes: ";
	cin >> a >> b >> c;
	
	if ( a > b && a > c && b > c) {
		cout << a << " " << b << " " << c;
		return 0;
	}
	
	if ( a > b && a > c && c > b) {
		cout << a << " " << c << " " << b;
		return 0;
	}
	
	if ( b > a && b > c && a > c) {
		cout << b << " " << a << " " << c;
		return 0;
	}
	
	if ( b > a && b > c && c > a) {
		cout << b << " " << c << " " << a;
		return 0;
	}
	
	if ( c > a && c > b && a > b) {
		cout << c << " " << a << " " << b;
		return 0; 
	}

	if ( c > a && c > b && b > a) {
		cout << c << " " << b << " " << a;
		return 0; 
	}
	
	return 0;
}
