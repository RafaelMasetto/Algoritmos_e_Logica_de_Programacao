#include <iostream>
using namespace std;

int main() {
	string r1, r2;
	int n1, n2;
	float soma, media;
	
	cout << "Informe o primeiro valor: \n";
	cin >> n1;
	
	cout << "Informe o segundo valor: \n";
	cin >> n2;
	
	soma = n1 + n2;
	
	media = soma/2;
	
	cout << "Voce gostaria de somar esses valores? \n";
	cin >> r1;
	
	if (r1 == "yes") {cout << "A soma de " << n1 << " e " << n2 << " eh " << soma << " !\n";
	}
		else {cout << "Fim.";
		
		return 0;
	}
		cout << "Voce gostaria de saber a media dessa soma? \n";
		cin >> r2;
		
		if (r2 == "yes") {cout << "E a media da soma eh: " << media << "!";
		}


	
	return 0;
}
