#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha(int dd, int mm, int aaaa)
{
	mes = mm;
	dia = dd;
	anio = aaaa;
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa)
{
	anio = aaaa;
	mes = mm;
	dia = dd;
	return;
}

void Fecha::muestraFecha()
{
	cout << "La fecha es (dia-mes-año): " << dia << "-" << mes << "-" << anio << "\n";
	return;
}

bool Fecha::leapyr()
{
	if(anio % 400 == 0){
		return true;
	}else if(anio % 4 == 0 && anio % 100 != 0){
		return true;
	}else{
		return false;
	}
}

void Fecha::esBisiesto()
{
	if(leapyr()){
		cout << "Es bisiesto\n";
	}else{
		cout << "No es bisiesto\n";
	}
	return;
}

void Fecha::convierte()
{
	int fecha = 0;
	fecha = anio*10000 + mes*100 + dia;
	cout << "La fecha es: " << fecha << "\n";


}