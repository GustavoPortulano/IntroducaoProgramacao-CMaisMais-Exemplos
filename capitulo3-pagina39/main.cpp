#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*26 de junho de 2025.*/
/*Quinta-feira, dia frio.00h18min*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");

	bool x;
	x = ((2 > 7) && (6 > 3));
	cout << x << endl;
	x = ((true)) || (false);
	
	cout << x << endl;
	cout << ((2 < 7) && (6 > 3)) << endl;
	cout << ((2 < 7) || (6 < 3)) << endl;
	cout << ((7 < 2) || (6 < 3)) << endl;
	x = !x;
	cout << x << endl;
	cout << !(2 < 3) << endl;
	
	system("pause");
	
	return 0;
}
