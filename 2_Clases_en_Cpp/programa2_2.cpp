#include "Fecha.h"
#include <iostream>

using namespace std;

int main()
{
	Fecha a, b, c(17, 9, 1973);
	a.muestraFecha();
	a.esBisiesto();
	a.convierte();

	b.muestraFecha();
	b.esBisiesto();
	b.convierte();

	c.muestraFecha();
	c.esBisiesto();
	c.convierte();

	int i, cont = 0;

	for(i = 1; i <=2017; i++){
		Fecha s(12, 3, i);
	 	if(s.leapyr()){
	 		cont++;
	 		cout << i << ", ";
	 	}
	}

	cout << "Hay " << cont << " años bisiestos de 1 a 2017\n";
}