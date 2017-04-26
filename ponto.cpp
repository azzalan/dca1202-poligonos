#include <iostream>
#include <cstdlib>
#include <iostream>
#include <math.h> 
using namespace std;

Ponto::Ponto(float x, float y){
  // armazena coordenadas do ponto
  this->x = x;
  this->y = y;
}

void Ponto::setX(float nx){
  x = nx;
}

void Ponto::setY(float ny){
  y = ny;
}

void Ponto::setXY(float nx, float ny){
  x = nx;
  y = ny;
}

float Ponto::getX(void){
  return x;
}

float Ponto::getY(void){
  return y;
}

void Ponto::add(Ponto p1){
  x += p1.x;
  y += p1.y;
}

void Ponto::sub(Ponto p1){
  x -= p1.x;
  y -= p1.y;
}

void Ponto::norma(void){
  float c1, c2;
  c1 = pow(x, 2);
  c2 = pow(y, 2);
  cout << "Norma:" << sqrt(c1 + c2) << endl;
}

void Ponto::translada(float a, float b){
  x += a;
  y += b;
}

void Ponto::imprime(void) {
  cout << "(" << x << ", " << y << ")";
}

bool Ponto::igual(Ponto p1) {
  if (x==p1.x && y==p1.y){ 
    return true;
  } else {
    return false;
  }
}






