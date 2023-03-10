#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char tipo;
	
	cout << "Digite o tipo sanguíneo (A, B, O ou Z): ";
	cin >> tipo;
	
	if (tipo == 'A' || tipo == 'a') {
		cout << "Paciente aceita doações dos tipos A e O.";
		return 0;		
	}
	
	if (tipo == 'B' || tipo == 'b') {
		cout << "Paciente aceita doações dos tipos B e O.";
		return 0;
	}
	
	if (tipo == 'O' || tipo == 'o') {
		cout << "Paciente aceita doações do tipo O.";
		return 0;
	}
	
	if (tipo == 'Z' || tipo == 'z') {
		cout << "Paciente aceita doações dos tipos A, B, AB e O.";
		return 0;
	}
	
	cout << "Opção inválida";
	return 0;
}
