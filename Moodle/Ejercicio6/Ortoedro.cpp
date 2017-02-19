#include <iostream>
#include "Ortoedro.h"
#include "Rectangulo.h"
#include "Coordenada.h"

using namespace std;

Ortoedro::Ortoedro(): cercaOrigen(0), lejosOrigen(0)
{ }

Ortoedro::Ortoedro(Coordenada cercaO, Coordenada lejosO): cercaOrigen(cercaO), lejosOrigen(lejosO)
{
  ver[0].constructor(cercaOrigen.obtenerX(), cercaOrigen.obtenerY(), cercaOrigen.obtenerZ());
  ver[1].constructor(cercaOrigen.obtenerX(), lejosOrigen.obtenerY(), cercaOrigen.obtenerZ());
  ver[2].constructor(lejosOrigen.obtenerX(), lejosOrigen.obtenerY(), cercaOrigen.obtenerZ());
  ver[3].constructor(lejosOrigen.obtenerX(), cercaOrigen.obtenerY(), cercaOrigen.obtenerZ());
  ver[4].constructor(lejosOrigen.obtenerX(), cercaOrigen.obtenerY(), lejosOrigen.obtenerZ());
  ver[5].constructor(cercaOrigen.obtenerX(), cercaOrigen.obtenerY(), lejosOrigen.obtenerZ());
  ver[6].constructor(cercaOrigen.obtenerX(), lejosOrigen.obtenerY(), lejosOrigen.obtenerZ());
  ver[7].constructor(lejosOrigen.obtenerX(), lejosOrigen.obtenerY(), lejosOrigen.obtenerZ());

  largo = - cercaOrigen.obtenerX() + lejosOrigen.obtenerX();
  ancho = - cercaOrigen.obtenerY() + lejosOrigen.obtenerY();
  alto  = - cercaOrigen.obtenerZ() + lejosOrigen.obtenerZ();


}

void Ortoedro::obtieneVertices()
{
    cout << "Obteniendo vértices" << "\n";
    for(int i = 0; i < 8; i++){
      cout << "X: " << ver[i].obtenerX() << "  " << "Y: " << ver[i].obtenerY() << "  " << "Z: " << ver[i].obtenerZ() << "\n";
    }
    return;
}

void Ortoedro::obtieneArea(){
    cout << "Área: " << 2*(largo*ancho + alto*largo + ancho * alto)<< "\n";
}

void Ortoedro::obtieneVolumen(){
    cout << "Volumen: " << largo*ancho*alto << "\n";
}
