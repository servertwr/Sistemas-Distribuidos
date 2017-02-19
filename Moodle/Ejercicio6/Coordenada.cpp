#include <iostream>
#include "Coordenada.h"

using namespace std;

Coordenada::Coordenada(double xx, double yy, double zz): x(xx), y(yy), z(zz)
{ }

double Coordenada::obtenerX()
{
    return x;
}

double Coordenada::obtenerY()
{
  return y;
}

double Coordenada::obtenerZ()
{
    return z;
}

void Coordenada::constructor(double xx, double yy, double zz){
  x = xx;
  y = yy;
  z = zz;
}
