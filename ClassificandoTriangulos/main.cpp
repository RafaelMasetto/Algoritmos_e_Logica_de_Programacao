#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3;
	
	cout << "Insira o primeiro valor: \n";
	cin >> n1;
	cout << "Insira o segundo valor: \n";
	cin >> n2;
	cout << "Insira o terceiro valor: \n";
	cin >> n3;
	
	if (n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2) {
		cout << "Esses tres valores formam um triangulo. \n";
	}else if (n1 == n2 && n1 == n3) {
		cout << "Esses tres valores formam um triangulo equilatero. \n";
		}else if (n1 == n2 || n1 == 3 || n2 == n3) {
			cout << "Esses tres valores formam um triangulo isosceles. \n";
			}else if (n1 != n2 && n1 != n3 && n2 != n3) {
				cout << "Esses tres valores formam um triangulo escaleno. \n";
			}else{
				cout << "Esses valores não formam um triangulo. \n";
			}	
	
	
	return 0;
}
