#include <iostream>

using namespace std;

const int N = 20;

struct Dato{
	int dato1;
	char dato2[N];
};

struct Dato var1;
struct Dato *ptr;

int name(){
 	char*locale;
 	locale=setlocale(LC_All,"");
  	ptr=&var1
  	cin >> "Puntero:\t" << ptr << endl;
  	cin << "Direccion de puntero:\t" << *ptr << endl;
 	return 0;
}
