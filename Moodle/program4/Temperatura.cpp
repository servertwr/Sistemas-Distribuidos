#include "Temperatura.h"
#include <iostream>

using namespace std;

void Temperatura::setTempKelvin(float temp)
{
	Tempkelvin = temp;
	cout << "k: "<< Tempkelvin <<endl;
}
void Temperatura::setTempFahrenheit(float temp)
{
	Tempkelvin = (temp +  459.67) * 5/9 ;
	cout << "f: "<< Tempkelvin <<endl;
}
void Temperatura::setTempCelsius(float temp)
{
	Tempkelvin = temp + 273.15;
	cout << "c: "<< Tempkelvin <<endl;
}

void Temperatura::showTempKelvin()
{
	cout << Tempkelvin << "°K" << endl;
}
void Temperatura::showTempFahrenheit()
{
	cout << Tempkelvin * 1.8 - 459.67   << "°F" << endl;
}
void Temperatura::showTempCelsius()
{
	cout << Tempkelvin - 273.15 << "°C" << endl;
}
