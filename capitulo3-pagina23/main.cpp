#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*24 de junho de 2025*/
/*Terça-feira. Dia frio. 00h11m*/

/*Capítulo 3. Página 23. Fluxo de entrada*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double numero1;
	double numero2;
	double soma;
	cout << "Digite o primeior número: ";
	cin >> numero1;
	cout << "Digite o segundo número: ";
	cin >> numero2;
	soma = numero1 + numero2;
	cout << "A soma dos numeros é " << soma << endl;
	
	system("pause");
	
	return 0;
}
