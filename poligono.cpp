#include <iostream>
#include <cstdlib>
#include <iostream>
#include <math.h> 
using namespace std;
#define PI 3.14159265

void Poligono::inserirVertices(void){
  int i;
  float x, y;
  bool diferente_da_primeira_vertice;
  for(i=0; i<100; i++){
    cout << "Vertice" << i+1 << endl << "x:";
    cin >> x;
    cout << "y:";
    cin >> y;
    vertices[i] = Ponto(x, y);
    if (i!=0 && vertices[i].igual(vertices[0])) {
      numero_de_vertices = i;
      i=100;
    }
  }
}

int Poligono::getNumeroDeVertices(void) {
  return numero_de_vertices;
}

void Poligono::translada(float a, float b) {
  int i;
  for(i=0; i<numero_de_vertices; i++) {
    vertices[i].translada(a, b);
  }
}

void Poligono::imprime(void) {
  int i;
  for(i=0; i<numero_de_vertices; i++) {
    vertices[i].imprime();
    cout << " -> ";
  }
  vertices[0].imprime();
  cout << endl;
}

void Poligono::imprimeArea(void) {
  cout << "Area do poligono:" << getArea() << endl;
}

float Poligono::getArea(void) {
  int i;
  float n=0;
  for(i=0; i<numero_de_vertices-1; i++) {
    n += 0.5*(vertices[i].getX()*vertices[i+1].getY()-vertices[i+1].getX()*vertices[i].getY());
  }
  n += 0.5*(vertices[i].getX()*vertices[0].getY()-vertices[0].getX()*vertices[i].getY());
  return n;
}

void Poligono::rotacionar(float angulo, Ponto apoio) {
  int i;
  float x_para_apoio, y_para_apoio;
  float angulo_rad = angulo*PI/180;
  Ponto novo_vertice_para_apoio;
  for(i=0; i<numero_de_vertices; i++) {
    x_para_apoio = vertices[i].getX()-apoio.getX();
    y_para_apoio = vertices[i].getY()-apoio.getY();
    novo_vertice_para_apoio.setX(x_para_apoio*cos(angulo_rad) - y_para_apoio*sin(angulo_rad));
    novo_vertice_para_apoio.setY(y_para_apoio*cos(angulo_rad) + x_para_apoio*sin(angulo_rad));
    vertices[i].setX(novo_vertice_para_apoio.getX()+apoio.getX());
    vertices[i].setY(novo_vertice_para_apoio.getY()+apoio.getY());
  }
}

void Poligono::setVertice(int posicao, float x, float y) {
  vertices[posicao].setXY(x, y);
}

Ponto Poligono::getVertice(int posicao) {
  return vertices[posicao];
}

void Poligono::setNumeroDeVertices(int numero_de_vertices) {
  this->numero_de_vertices = numero_de_vertices;
}
