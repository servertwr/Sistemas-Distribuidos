#include "Temperatura.h"
#include <iostream>
using namespace std;

int main()
{
	float temp;
	int option;
	Temperatura t;

	cout << "Ingresar temperatura en:\n"
	<<"1. Kelvin\n2. Fahrenheit\n3. Celsius\n: ";
	cin >> option;
	switch(option){
		case 1:
			cout << ">> ";
			cin >> temp;
			t.setTempKelvin(temp);
		break;
		case 2:
			cout << ">> ";
			cin >> temp;
			t.setTempFahrenheit(temp);
		break;
		case 3:
			cout << ">> ";
			cin >> temp;
			t.setTempCelsius(temp);
		break;
	}

	cout << "Mostrar temperatura en:\n"
	<<"1. Kelvin\n2. Fahrenheit\n3. Celsius\n: ";
	cin >> option;
	switch(option){
		case 1:	t.showTempKelvin();
		break;
		case 2:	t.showTempFahrenheit();
		break;
		case 3:	t.showTempCelsius();
		break;
	}

	return 0;
}
