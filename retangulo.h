#include "poligono.h"

#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo: public Poligono {
  float largura, altura;
public:
  Retangulo(float x, float y, float largura, float altura);
  Ponto getCentro(void);
};

#endif // RETANGULO_H