#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*23 de junho de 2025*/
/*Segunda-feira, noite fria*/

/*Capítulo 2, página 19: Criando variáveis*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	//criando uma variável do tipo inteira com o nome x
	int numero;
	//criando uma variável do tipo char com o nome letra
	char letra;
	//criando uma variável do tipo double com o nome num_real
	double num_real;
	//crinado uma variável do tipo bool com nome teste
	bool teste;
	cout << "Este programa criou 4 variáveis" << endl;
	
	system("pause");
	
	return 0;
}
