#include <iostream>

using namespace std;

const int N = 20;

struct Dato{
 	int dato1;
 	char dato2[N];
};

struct Dato2{
 	int dato3;
 	struct Dato usar_a_Dato;
};

struct Dato3{
 	int dato4;
 	struct Dato2 usar_a_Dato2;
};

struct Dato4{
 	int dato5;
 	struct Dato3 usar_a_Dato3;
};

struct Dato5{
 	int dato6;
 	struct Dato4 usar_a_Dato4;
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
  	
 	struct Dato3 var3;
 	struct Dato3 *ptr3;
  	ptr3=&var3;
  	
  	struct Dato4 var4;
 	struct Dato4 *ptr4;
  	ptr4=&var4;
  	
  	struct Dato5 var5;
 	struct Dato5 *ptr5;
  	ptr5=&var5;
  	
  	cout << "Dirección puntero: " << &ptr << endl;
  	cout << "Dirección a donde apunta el puntero: " << ptr << endl;
  	cout << "\nIngrese dato 1: ";
  	cin >> (*ptr).dato1;
  	cout << "Ingrese dato 2: ";
  	fflush(stdin);
  	cin.getline((*ptr).dato2, N, '\n');
 	cout << "\nValor del dato 1: " << (*ptr).dato1 << endl;
 	cout << "Valor del dato 2: " << (*ptr).dato2 << endl;
 	// ninguna anidacion de estructuras
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> ptr2->usar_a_Dato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(ptr2->usar_a_Dato.dato2, N, '\n');
 	cout << "Ingrese dato 3: ";
 	cin >> ptr2->dato3;
 	cout << "\nValor dato 1: " << ptr2->usar_a_Dato.dato1 << endl;
 	cout << "Valor dato 2: " << ptr2->usar_a_Dato.dato2 << endl;
 	cout << "Valor dato 3: " << ptr2->dato3 << endl;
 	//primera anidacion de estructuras
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> ptr3->usar_a_Dato2.usar_a_Dato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(ptr3->usar_a_Dato2.usar_a_Dato.dato2, N, '\n');
 	cout << "Ingrese dato 4: ";
 	cin >> ptr3->dato4;
 	cout << "\nValor dato 1: " << ptr3->usar_a_Dato2.usar_a_Dato.dato1 << endl;
 	cout << "Valor dato 2: " << ptr3->usar_a_Dato2.usar_a_Dato.dato2 << endl;
 	cout << "Valor dato 4: " << ptr3->dato4 << endl;
 	//segunda anidacion de estructuras
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> ptr4->usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(ptr4->usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2, N, '\n');
 	cout << "Ingrese dato 5: ";
 	cin >> ptr4->dato5;
 	cout << "\nValor dato 1: " << ptr4->usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1 << endl;
 	cout << "Valor dato 2: " << ptr4->usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2 << endl;
 	cout << "Valor dato 5: " << ptr4->dato5 << endl;
 	//tercera anidacion de estructuras
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> ptr5->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(ptr5->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2, N, '\n');
 	cout << "Ingrese dato 6: ";
 	cin >> ptr5->dato6;
 	cout << "\nValor dato 1: " << ptr5->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1 << endl;
 	cout << "Valor dato 2: " << ptr5->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2 << endl;
 	cout << "Valor dato 6: " << ptr5->dato6 << endl;
 	//cuarta anidacion de estructuras
 	
 	return 0;
}
