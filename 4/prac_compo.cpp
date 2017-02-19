#include "Coordenada.h"
#include "Rectangulo.h"
#include <iostream>
using namespace std;
 
int main( )
{
  //Rectangulo rectangulo1(Coordenada(2,3),Coordenada(5,1)); //Coordenadas Cartesianas
  Rectangulo rectangulo1(Coordenada(3.605551,56.3099),Coordenada(5.099020,11.3)); //Coordenadas Polares
  cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano:\n";      
  rectangulo1.imprimeEsq();
  cout << "El área del rectángulo es = " << rectangulo1.obtieneArea() << endl;
  
  return 0;
}  
 
