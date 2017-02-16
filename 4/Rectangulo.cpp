#include "Coordenada.h"
#include "Rectangulo.h" 
#include <iostream>
#include <math.h>
using namespace std;
 
Rectangulo::Rectangulo() : superiorIzq(0,0), inferiorDer(0,0)
{ }

Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer):superiorIzq(xSupIzq, ySupIzq), inferiorDer(xInfDer, yInfDer) 
{ }

void Rectangulo::imprimeEsq()
{
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << endl;    
}

Coordenada Rectangulo::obtieneSupIzq()
{
  return superiorIzq;
}

 
Coordenada Rectangulo::obtieneInfDer()
{
  return inferiorDer;
}

/*Coordenadas cartesianlas*/
/*
Rectangulo::Rectangulo(Coordenada co1, Coordenada co2):superiorIzq(co1.obtenerX(), co1.obtenerY()), inferiorDer(co2.obtenerX(), co2.obtenerY())
{}
*/

double Rectangulo::obtieneArea(){
  double alto = obtieneSupIzq().obtenerY() - obtieneInfDer().obtenerY();
  double ancho = obtieneInfDer().obtenerX() - obtieneSupIzq().obtenerX();
  
  return ancho*alto;
}

/*Coordenadas Polares*/
Rectangulo::Rectangulo(Coordenada co1, Coordenada co2):
superiorIzq( co1.obtenerX()*cos(co1.obtenerY()/57.2958), co1.obtenerX()*sin(co1.obtenerY()/57.2958) ), 
inferiorDer( co2.obtenerX()*cos(co2.obtenerY()/57.2958), co2.obtenerX()*sin(co2.obtenerY()/57.2958) )
{}
