#include <iostream>
#include <locale.h>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int tamanhoConjunto;
	cout << "Digite quantos elementos o conjunto possui: " << endl;
	cin >> tamanhoConjunto;
	int conjunto[tamanhoConjunto];

	for(int i = 0; i < tamanhoConjunto; i++) {
		cout << "Digite um elemento do conjunto: " << endl;
		cin >> conjunto[i];
	}

	int tamanhoRelacao;
	cout << "Digite a quantidade de pares ordenados da relação: ";
	cin >> tamanhoRelacao;	

	int x[tamanhoRelacao], y[tamanhoRelacao];

	for (int i = 0; i < tamanhoRelacao; i++) {
		cout << "Digite o primeiro elemento do par " << i+1 << endl; 
		cin >> x[i];

		cout << "Digite o segundo elemento do par " << i+1 << endl; 
		cin >> y[i];
	}

	{
		std::stringstream ss;
		for(size_t i = 0; i < tamanhoConjunto; ++i)
		{
			if(i != 0)
				ss << ", ";
			ss << conjunto[i];
		}
		std::string s = ss.str();	

		cout << "Conjunto = { " << s << " }" << endl;
	}

	{
		std::stringstream ss;
		for(size_t i = 0; i < tamanhoRelacao; ++i)
		{
			if(i != 0)
				ss << ", ";
			ss << "(" << x[i] << ", " << y[i] << ")";
		}
		std::string s = ss.str();	

		cout << "Relação = {" << s << "}" << endl;

	}

	

	bool ehReflexiva = true;
	for(int i = 0; i < tamanhoConjunto; i++) {
		bool eleConjTemParReflexivo = false;
		for(int j = 0; j < tamanhoRelacao; j++) {
			if (x[j] == conjunto[i] && y[j] == conjunto[i]) eleConjTemParReflexivo = true;
		}
		if (!eleConjTemParReflexivo) ehReflexiva = false;
	}
	string mensagemReflexiva = ehReflexiva ? "A relação é reflexiva" : "A relação não é reflexiva";
	cout << mensagemReflexiva  << endl;

	bool ehSimetrica = false;
	for(int i = 0; i < tamanhoRelacao; i++) {
		for (int j = i; j < tamanhoRelacao; j++) {
			if ( x[i] == y[j] && y[i] == x [j]) ehSimetrica = true;
		}
	}
	string mensagemSimetrica = ehSimetrica ? "A relação é simétrica": "A relação não é simétrica";
	cout << mensagemSimetrica << endl;
	

	return 0;
}
