#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*24 de junho de 2025*/
/*Terça-feira, noite fria*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero1;
	int numero2; 
	int r;
	
	cout << "Digite o primeiro número: ";
	cin >> numero1;
	cout << "Digite o segundo número: ";
	cin >> numero2;
	
	r = numero1 + numero2;
	cout << "Adição dos números = " << r << endl;
	
	r = numero1 - numero2;
	cout << "Subtração dos números = " << r << endl;
	
	r = numero1 * numero2;
	cout << "Multiplicação dos números: " << r << endl;
	
	r = numero1 / numero2;
	cout << "Divisão dos números = " << r << endl;
	
	r = numero1 % numero2;
	cout << "Resto da divisão = " << r << endl;
	
	system("pause");
	
	return 0;
}
