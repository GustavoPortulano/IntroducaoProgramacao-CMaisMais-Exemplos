#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 24 de junho de 2025. Terça-feira
// Tarde fria

// Capítulo 3, página 34: Dados lógicos e comparações

// As variáveis lógicas respondem á escolhas apenas com duas 
// respostas: verdadeir (true) ou false (false), o que corresponde
// a resolver um dilema (problema que aceita apenas duas soluções).

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	bool var1;
	var1 = true;
	bool var2;
	var2 = false;
	
	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;
	
	system("pause");
	
	return 0;
}
