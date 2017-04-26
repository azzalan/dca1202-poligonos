#include "poligono.h"

#ifndef RETANGULO_H
#define RETANGULO_H


class Retangulo: public Poligono {
  float largura, altura;
public:
  // Construtor, valores x e y representar as coordenadas do ponto superior
  // esquerdo do retangulo.
  Retangulo(float x, float y, float largura, float altura);
  // Método que retorna o ponto que representa o centroíde do retangulo.
  Ponto getCentro(void);
};

#endif // RETANGULO_H