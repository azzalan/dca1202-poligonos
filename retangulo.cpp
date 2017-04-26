#include <iostream>
#include <cstdlib>
#include <iostream>
#include <math.h> 
#include "retangulo.h"
using namespace std;

Retangulo::Retangulo(float x, float y, float largura, float altura){
  this->largura = largura;
  this->altura = altura;
  setNumeroDeVertices(4);
  setVertice(0, x, y);
  setVertice(1, x, y-altura);
  setVertice(2, x+largura, y-altura);
  setVertice(3, x+largura, y);
}

Ponto Retangulo::getCentro(void) {
  Ponto centro;
  centro.setX(getVertice(0).getX()+largura*0.5);
  centro.setY(getVertice(0).getY()-altura*0.5);
  return centro;
}
