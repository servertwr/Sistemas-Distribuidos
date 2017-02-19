#include "Fecha.h"

int main() {
	int i, c, cont = 100000;
	Fecha a, b;

	for(i = 0; i < cont; i++){
		a = crearFA();
		b = crearFA();
		c = masViejaC(&a, &b);
	}
  return 0;
}
