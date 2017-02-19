#include "Ortoedro.h"
#include "Rectangulo.h"
#include "Coordenada.h"

#include <iostream>
using namespace std;

int main()
{
  Ortoedro ortoedro1(Coordenada(0, 0, 0),Coordenada(4, 5, 3));

  ortoedro1.obtieneVertices();
  ortoedro1.obtieneArea();
  ortoedro1.obtieneVolumen();
}
