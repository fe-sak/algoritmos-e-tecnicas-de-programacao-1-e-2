#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char tipo;
	
	cout << "Digite o tipo sangu�neo (A, B, O ou Z): ";
	cin >> tipo;
	
	switch (tipo) {
		case 'A':
			cout << "Paciente aceita doa��es dos tipos A e O.";
			break;
		case 'B':
			cout << "Paciente aceita doa��es dos tipos B e O.";
			break;
		case 'O':
			cout << "Paciente aceita doa��es do tipo O.";
			break;
		case 'Z':
			cout << "Paciente aceita doa��es dos tipos A, B, AB e O.";
			break;
		default 
			cout << "Tipo inv�lido";
	}
	
	if (tipo == 'A' || tipo == 'a') {
		cout << "Paciente aceita doa��es dos tipos A e O.";
		return 0;		
	}
	
	if (tipo == 'B' || tipo == 'b') {
		cout << "Paciente aceita doa��es dos tipos B e O.";
		return 0;
	}
	
	if (tipo == 'O' || tipo == 'o') {
		cout << "Paciente aceita doa��es do tipo O.";
		return 0;
	}
	
	if (tipo == 'Z' || tipo == 'z') {
		cout << "Paciente aceita doa��es dos tipos A, B, AB e O.";
		return 0;
	}
	
	cout << "Op��o inv�lida";
	return 0;
}
