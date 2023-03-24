#include <iostream>
#include <locale.h>
#include <stdint.h>
#include <limits>

typedef uint64_t u64;

int main() {
	setlocale(LC_ALL, "");
	int n;
	u64 fatorial;
	
	fatorial = 1;
	std::cout << std::numeric_limits<u64>::max() << "\n";
	std::cout << "Digite o número que deseja descobrir o fatorial: ";
	std::cin >> n;
	
	for(int i = 1; i <= n; i++) {
		fatorial *= i;
	}
	
	std::cout << "Fatorial de " << n << " é igual a " << fatorial;
}
