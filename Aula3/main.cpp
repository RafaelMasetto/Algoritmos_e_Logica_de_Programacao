#include <iostream>
using namespace std;

int main() {
	string nome;
	int idade;
	cout << "Informe seu nome: ";
	cin >> nome;
	cout << "Informe sua idade: ";
	cin >> idade;
	
	if(idade >= 18){
		cout << "Ola " << nome << ", seu voto e obrigatorio.";
	}else if(idade >= 16){
		cout <<"Ola " << nome << ", seu voto nao e obrigatorio.";
	}else{
		cout <<"Ola " << nome << ", voce nao pode votar.";
	}
	
	
	return 0;
}
