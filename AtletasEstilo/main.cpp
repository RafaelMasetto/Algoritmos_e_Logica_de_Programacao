#include <iostream>
using namespace std;

int main() {
	string nome;
	int ano=2023, nasc, estilo, idade;
	
	cout << "Qual o seu nome? \n";
	cin >> nome;
	cout << "Qual o ano de seu nascimento? \n";
	cin >> nasc;
	cout << "Qual seu estilo de natacao? \n1. Nado Livre. \n2. Nado de Costas. \n3. Nado Borboleta. \n";
	cin >> estilo;
	
	idade = ano - nasc;

	
	if (estilo == 1 && idade <= 16) {
		cout << nome << " de " << idade << " anos, seguir para piscina 1. \n";
	}else if (estilo == 1 && idade > 16) {
		cout << nome << " de " << idade << " anos, seguir para piscina 5. \n";
	}else if (estilo == 2 && idade <= 21) {
		cout << nome << " de " << idade << " anos, seguir para piscina 2. \n";
	}else if (estilo == 2 && idade > 21) {
		cout << nome << " de " << idade << " anos, seguir para piscina 3. \n";
	}else if (estilo == 3 && idade < 12)	{
		cout << nome << " de " << idade << " anos, seguir para piscina 4. \n";
	}else if (estilo == 3 && idade >= 12) {
		cout << nome << " de " << idade << " anos, seguir para piscina 6. \n";
		}else if(estilo >= 4) {
			cout << "Estilo invalido. Tente Novamente. \n";
		}	
	
	
	
	return 0;
}
