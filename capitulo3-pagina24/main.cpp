#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*24 de junho de 2025*/
/*Terça-feira, dia frio*/

/*Capítulo 3. Página 24. Alterações possíveis.*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double numero1, numero2, soma;
	cout << "Digite o primeiro número: ";
	cin >> numero1;
	cout << "Digite o segundo número: ";
	cin >> numero2;
	soma = numero1 + numero2;
	cout << "A soma dos numeros é " << soma << endl;
	
	system("pause");
	
	return 0;
}
