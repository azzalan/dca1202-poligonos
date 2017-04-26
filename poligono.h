#ifndef POLIGONO_H
#define POLIGONO_H


class Poligono{
private:
  Ponto vertices[100];
  int numero_de_vertices;
public:
  void inserirVertices(void);
  int getNumeroDeVertices(void);
  void imprime(void);
  void translada(float a, float b);
  void imprimeArea(void);
  float getArea(void);
  void rotacionar(float angulo, Ponto apoio);
  void setVertice(int posicao, float x, float y);
  Ponto getVertice(int posicao);
  void setNumeroDeVertices(int numero_de_vertices);
};

#endif // POLIGONO_H