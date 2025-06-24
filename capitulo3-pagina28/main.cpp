#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*24 de junho de 2025. Terça-feira.*/
/*Tarde fria*/

/*Página 27: Operadores de atribuição aritméticos.*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero1;
	int numero2;
	
	cout << "Digite o primeiro número: ";
	cin >> numero1;
	cout << "Digite o segundo número: ";
	cin >> numero2;
	
	//Os valores das variáveis vão mudando conforme as operações matemáticas.
	
	numero1 += numero2;
	cout << "Somando ";
	cout << numero2 << " -> " << numero1 << endl;
	
	numero1 -= numero2;
	cout << "Subtraindo ";
	cout << numero2 << " -> " << numero1 << endl;
	
	numero1 *= numero2;
	cout << "Multiplicando por ";
	cout << numero2 << " -> " << numero1 << endl;
	
	numero1 /= numero2;
	cout << "Dividindo por ";
	cout << numero2 << " -> " << numero1 << endl;
	
	numero1 %= numero2;
	cout << "Resto da divisão por ";
	cout << numero2 << " -> " << numero1 << endl;
	
	system("pause");
	
	return 0;
}
