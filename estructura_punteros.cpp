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
  	struct Dato5 var5;
 	struct Dato5 *Ptr;
  	Ptr=&var5;
  	
  	cout << "Dirección puntero: " << &Ptr << endl;
  	cout << "Dirección a donde apunta el puntero: " << Ptr << endl;
  	cout << "\nIngrese dato 1: ";
  	cin >> Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1;
  	cout << "Ingrese dato 2: ";
  	fflush(stdin);
  	cin.getline(Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2, N, '\n');
 	cout << "\nValor del dato 1: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1 << endl;
 	cout << "Valor del dato 2: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2 << endl;
 	// ninguna anidacion de estructuras
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2, N, '\n');
 	cout << "Ingrese dato 3: ";
 	cin >> Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.dato3;
 	cout << "\nValor dato 1: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1 << endl;
 	cout << "Valor dato 2: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2 << endl;
 	cout << "Valor dato 3: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.dato3 << endl;
 	//primera anidacion de estructuras
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2, N, '\n');
 	cout << "Ingrese dato 4: ";
 	cin >> Ptr->usar_a_Dato4.usar_a_Dato3.dato4;
 	cout << "\nValor dato 1: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1 << endl;
 	cout << "Valor dato 2: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2 << endl;
 	cout << "Valor dato 4: " << Ptr->usar_a_Dato4.usar_a_Dato3.dato4 << endl;
 	//segunda anidacion de estructuras
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2, N, '\n');
 	cout << "Ingrese dato 5: ";
 	cin >> Ptr->usar_a_Dato4.dato5;
 	cout << "\nValor dato 1: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1 << endl;
 	cout << "Valor dato 2: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2 << endl;
 	cout << "Valor dato 5: " << Ptr->usar_a_Dato4.dato5 << endl;
 	//tercera anidacion de estructuras
 	
 	cout << "\nIngrese dato 1: ";
 	cin >> Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1;
 	cout << "Ingrese dato 2: ";
 	fflush(stdin);
 	cin.getline(Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2, N, '\n');
 	cout << "Ingrese dato 6: ";
 	cin >> Ptr->dato6;
 	cout << "\nValor dato 1: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato1 << endl;
 	cout << "Valor dato 2: " << Ptr->usar_a_Dato4.usar_a_Dato3.usar_a_Dato2.usar_a_Dato.dato2 << endl;
 	cout << "Valor dato 6: " << Ptr->dato6 << endl;
 	//cuarta anidacion de estructuras
 	
 	return 0;
}
