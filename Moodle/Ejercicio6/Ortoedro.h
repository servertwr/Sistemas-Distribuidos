#ifndef  ORTOEDRO_H_
#define  ORTOEDRO_H_

#include "Coordenada.h"

class Ortoedro
{
  private:
    Coordenada cercaOrigen;
    Coordenada lejosOrigen;
    Coordenada ver[8];
    double largo, ancho, alto;
  public:
    Ortoedro();
    Ortoedro(Coordenada cercaO, Coordenada lejosO);
    void obtieneVertices();
    void obtieneArea();
    void obtieneVolumen();
};


#endif
