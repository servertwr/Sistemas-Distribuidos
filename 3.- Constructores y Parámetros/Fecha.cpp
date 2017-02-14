#include "Fecha.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;


Fecha::Fecha(int dd, int mm, int aaaa): dia(dd), mes(mm), anio(aaaa)
{
	if((mes < 1) || (mes > 12)){
		cout << "Valor ilegal para el mes!\n";
		exit(1);
	}else if((mes < 1) || (mes > 31)){
		cout << "Valor ilegal para el día!\n";
		exit(1);
	}else if((anio < 0) || (anio > 2017)){
		cout << "Valor ilegal para el día!\n";
		exit(1);
	}
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


int masViejaVal(Fecha fecha1, Fecha fecha2){
	int fecha11 = 0, fecha22 = 0;
	fecha11 = fecha1.anio*10000 + fecha1.mes*100 + fecha1.dia;
	fecha22 = fecha2.anio*10000 + fecha2.mes*100 + fecha2.dia;

	if(fecha11 > fecha22){
		return 1;
	}else if(fecha11 == fecha22){
		return 0;
	}else{
		return -1;
	}
}

int masViejaRef(Fecha &fecha1, Fecha &fecha2){
	int fecha11 = 0, fecha22 = 0;
	fecha11 = fecha1.anio*10000 + fecha1.mes*100 + fecha1.dia;
	fecha22 = fecha2.anio*10000 + fecha2.mes*100 + fecha2.dia;

	if(fecha11 > fecha22){
		return 1;
	}else if(fecha11 == fecha22){
		return 0;
	}else{
		return -1;
	}
}

int masViejaC(Fecha *fecha1, Fecha *fecha2){
	int fecha11 = 0, fecha22 = 0;
	fecha11 = fecha1->anio*10000 + fecha1->mes*100 + fecha1->dia;
	fecha22 = fecha2->anio*10000 + fecha2->mes*100 + fecha2->dia;

	if(fecha11 > fecha22){
		return 1;
	}else if(fecha11 == fecha22){
		return 0;
	}else{
		return -1;
	}
}


Fecha crearFA(){
	int mes, dia, anio;
	mes = rand() % 12 + 1;
	dia = rand() % 31 + 1;
	anio = rand() % 2017 + 1;

	Fecha f(dia, mes, anio);

	return f;
}
