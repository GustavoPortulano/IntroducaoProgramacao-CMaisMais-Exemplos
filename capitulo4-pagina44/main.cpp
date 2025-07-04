#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	double largura;
	
	cout << "Digite a largura do quadrado: ";
	cin >> largura;
	
	if (largura >=0){
		cout << "A área do quadrado é: ";
		cout << largura * largura << endl;
	}
	return 0;
}
