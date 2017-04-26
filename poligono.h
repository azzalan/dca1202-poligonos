#ifndef POLIGONO_H
#define POLIGONO_H


class Poligono{
private:
  Ponto vertices[100];
  int numero_de_vertices;
public:
  // Método para fazer a entrada manual dos vértices, o número máximo de vértices
  // é 100. A entrada para ao atingir o ponto original.
  void inserirVertices(void);
  // Método que returna o número de vértices do polígono.
  int getNumeroDeVertices(void);
  // Método que imprime as coordenadas dos vértices do polígono no formato:
  // (x0,y0)→(x1,y1)→(x2,y2)→…​
  void imprime(void);
  // Método que resposiciona o polígono, o movendo a distância 'a' pela coordenada x
  //  e a distância 'b' pela coordanada y.
  void translada(float a, float b);
  // Método que imprime a área do polígono.
  void imprimeArea(void);
  // Método que retorna a área do polígono.
  float getArea(void);
  // Método que reposiona o polígono o rotacionando na quantidade 'angulo' em graus, usando como
  // ponto de apoio o ponto 'apoio'.
  void rotacionar(float angulo, Ponto apoio);
  // Método que seta um vértice específico do polígono usando sua posíção no array 'vertices'. 
  void setVertice(int posicao, float x, float y);
  // Método que retorna um vértice específico do polígono usando sua posíção no array 'vertices'.
  Ponto getVertice(int posicao);
  // Método que seta o número de vértices do polígono.
  void setNumeroDeVertices(int numero_de_vertices);
};

#endif // POLIGONO_H