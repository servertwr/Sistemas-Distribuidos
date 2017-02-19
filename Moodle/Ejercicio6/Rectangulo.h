#ifndef  RECTANGULO_H_
#define  RECTANGULO_H_

#include "Coordenada.h"

class Rectangulo
{
  private:
    Coordenada superiorIzq;
    Coordenada inferiorDer;
  public:
    Rectangulo();
    Rectangulo(Coordenada supIzq, Coordenada supDer);
  
};

#endif
