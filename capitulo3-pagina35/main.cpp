#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 24 de junho de 2025. Terça-feira
// Tarde fria.

// Capítulo 3, página 35: Operadores relacionais

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	bool x;
	x = 2 < 9;
	
	cout << x << endl;
	cout << (2 < 3) << endl;
	cout << (4 > 5) << endl;
	cout << (1 <= 7) << endl;
	cout << (2 >= 2) << endl;
	cout << (4 == 4) << endl;
	cout << (4 != 4) << endl;
	
	system("pause");
	
	return 0;
}
