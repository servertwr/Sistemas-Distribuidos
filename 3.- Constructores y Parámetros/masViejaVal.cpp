#include "Fecha.h"

int main() {
	int i, c, cont = 1000;
	Fecha a, b;

	for(i = 0; i < cont; i++){
		a = crearFA();
		b = crearFA();
		c = masViejaVal(a, b);
	}
  return 0;
}
