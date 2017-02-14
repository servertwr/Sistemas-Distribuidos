#ifndef  FECHA_H_
#define  FECHA_H_

class Fecha
{
  public:
		int dia;
		int mes;
		int anio;
    long int arr[50000];

		Fecha(int = 3, int = 4, int = 2014);
		void inicializaFecha(int, int, int);
		void muestraFecha();

};

int masViejaRef(Fecha &fecha1, Fecha &fecha2);
int masViejaC(Fecha *fecha1, Fecha *fecha2);
int masViejaVal(Fecha fecha1, Fecha fecha2);
Fecha crearFA();

#endif
