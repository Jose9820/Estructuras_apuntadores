#include <iostream>

using namespace std;

const int N = 20;

struct Dato{
 	int dato1;
 	char dato2[N];
};

struct Dato2{
	int dato3;
	struct Dato Sdato;
};

int main(){
 	char*locale;
 	locale=setlocale(LC_ALL,"");
 	struct Dato var1;
 	struct Dato *ptr;
  	ptr=&var1;
  	struct Dato2 var2;
  	struct Dato2 *ptr2;
  	ptr2=&var2;
  	cout << "Dirección puntero: " << &ptr << endl;
  	cout << "Dirección a donde apunta el puntero: " << ptr << endl;
  	cout << "\nIngrese dato 1: ";
  	cin >> (*ptr).dato1;
  	cout << " Ingrese dato 2: ";
  	fflush(stdin);
  	cin.getline((*ptr).dato2, N, '\n');
 	cout << "\nValor del dato 1: " << (*ptr).dato1 << endl;
 	cout << "Valor del dato 2: " << (*ptr).dato2 << endl;
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> ptr2->Sdato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(ptr2->Sdato.dato2, N, '\n');
 	cout << "Ingrese dato 3: ";
 	cin >> ptr2->dato3;
 	cout << "\nValor dato 1: " << ptr2->Sdato.dato1 << endl;
 	
 	cout << "Valor dato 2: " << ptr2->Sdato.dato2 << endl;
 	
 	cout << "Valor dato 3: " << ptr2->dato3 << endl;
 	
 	return 0;
}
