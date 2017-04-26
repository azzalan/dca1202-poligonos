#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "ponto.h"
#include "retangulo.h"
#include "poligono.h"
#include "ponto.cpp"
#include "poligono.cpp"
#include "retangulo.cpp"

using namespace std;

int main(){
  Retangulo ret(0, 0, 4, 3);
  ret.imprime();
  cout << "Area:" << ret.getArea() << endl;
  ret.translada(-3, 4);
  ret.imprime();
  ret.rotacionar(30, ret.getCentro());
  ret.imprime();
  cout << "Area:" << ret.getArea() << endl;
  getchar();
  getchar();
  return 0;
}