#include <iostream>
#include "Rectangulo.h"
#include "Coordenada.h"

using namespace std;

Rectangulo::Rectangulo(): superiorIzq(0), inferiorDer(0)
{ }

Rectangulo::Rectangulo(Coordenada supIzq, Coordenada infDer): superiorIzq(supIzq), inferiorDer(infDer)
{ }
