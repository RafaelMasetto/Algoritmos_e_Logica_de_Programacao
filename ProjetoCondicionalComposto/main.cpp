#include <iostream>
using namespace std;

int main() {
	float n1=0, n2=0, n3=0, media=0, freq=0, exame=0;
	
	cout << "Insira a primeira nota \n";
	cin >> n1;
	cout << "Insira a segunda nota \n";
	cin >> n2;
	cout << "Insira a terceira nota \n";
	cin >> n3;
	cout << "Insira a sua frequencia \n";
	cin >> freq;
	
	media = (n1+n2+n3) / 3;
	
	if (media >= 6 && freq >= 75) {
		cout << "Aluno Aprovado. \n";
	}else if(media >= 4 && freq >= 75){
		cout << "Aluno pode tentar o EXAME. \n";
		
		cout << "Insira o resultado do EXAME. \n";
		cin >> exame;
			if (exame >= 6) {
				cout << "Aluno Aprovado. \n";
			}else {
				cout << "Aluno Reprovado. \n";
				return 0;
			}
	
	}else {
		cout << "Aluno Reprovado. \n";
	}
	
	
	return 0;
}
