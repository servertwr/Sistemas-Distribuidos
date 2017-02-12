#include <iostream>
using namespace std;


int main ()

{
	int horas =0;
	int minutos=0;
	int segundos;


	cout << "Introduce los segundos  ";
	cin >> segundos;

	if (segundos >= 3600){
		horas =  segundos/3600;
		segundos = segundos - (horas*3600);
	}

	if (segundos >= 60){
		minutos = segundos/60;
		segundos = segundos - (minutos*60);
	}

	cout << horas << " horas, " << minutos << " minutos y " << segundos <<" segundos";


}