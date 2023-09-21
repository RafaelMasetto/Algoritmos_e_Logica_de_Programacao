#include <iostream>
using namespace std;


int main() {
	string nome;
	string resp;
	int acertos;
	acertos = 0;
	
	cout << "-=-=- Quiz de Final Fantasy -=-=-\n";
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	
	cout << "Ola " << nome << "\nPreparado para o quiz?\n";
	
	cout << "1. Zidane eh protagonista de qual jogo da franquia?\n";
	cout << "a) Final Fantasy XII \nb) Final Fantasy IX \nc) Final Fantasy VII \nd) Final Fantasy Tactics\n";
	cin >> resp;
	
	if(resp == "b" || resp == "B"){
		cout << "Parabens, voce acertou!\n";
		acertos ++;
		}else{
			cout << "Eh uma pena, voce errou!\n";
	}
	
	cout << "2. Gunblade eh a arma de qual protagonista da franquia?\n";
	cout << "a) Zidane \nb) Ramza \nc) Squall \nd) Cloud\n";
	cin >> resp;
	
	if(resp == "c" || resp == "C"){
		cout << "Parabens, voce acertou!\n";
		acertos ++;
		}else{
			cout << "Eh uma pena, voce errou!\n";
	}
	
	cout << "3. Qual a classe inicial de Ramza em Final Fantasy Tactics?\n";
	cout << "a) Squire \nb) Knight \nc) White Mage \nd) Monk\n";
	cin >> resp;
	
	if(resp == "a" || resp == "A"){
		cout << "Parabens, voce acertou!\n";
		acertos ++;
		}else{
			cout << "Eh uma pena, voce errou!\n";
	}
	
	cout << "4. Chocobos sao:\n";
	cout << "a) Lagartos \nb) Raposas \nc) Passaros \nd) Cavalos\n";
	cin >> resp;
	
	if(resp == "c" || resp == "C"){
		cout << "Parabens, voce acertou!\n";
		acertos ++;
		}else{
			cout << "Eh uma pena, voce errou!\n";
	}	
	
	cout << "5. Cloud Strife era um:\n";
	cout << "a) Ze Ruela \nb) Soldier \nc) Turk \nd) Cozinheiro\n";
	cin >> resp;
	
	if(resp == "b" || resp == "B"){
		cout << "Parabens, voce acertou!\n";
		acertos ++;
		}else{
			cout << "Eh uma pena, voce errou!\n";
	}
	
	cout << "Voce acertou " << acertos << " respostas.\nParabens!\n";
	cout << "Errando um total de " << 5 - acertos << " respostas!\n";
	cout << "Porcentagem de acertos " << (acertos/5)*100 << "%\n";
	
	cout << "Muito obrigado por participar!";
	
	return 0;
}
