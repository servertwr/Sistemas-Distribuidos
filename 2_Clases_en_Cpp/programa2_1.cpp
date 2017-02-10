#include <iostream>
using namespace std;

class Fecha
{
	private:
		int dia;
		int mes;
		int anio;
	public:
		Fecha(int = 3, int = 4, int = 2014);
		void inicializaFecha(int, int, int);
		void muestraFecha();
};

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

int main()
{
	Fecha a, b, c(17, 9, 1973);
	a.muestraFecha();
	b.muestraFecha();
	c.muestraFecha();

	Fecha ejemplo;
	cout << ejemplo.dia;
	cout << ejemplo.mes;
	cout << ejemplo.anio;

/*
	Erro dentro de este contexto
	la variable es privada.
*/

}