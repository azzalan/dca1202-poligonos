#ifndef PONTO_H
#define PONTO_H


class Ponto{
private:
  float x, y;
public:
  // Construtor, x e y representam as coordenas cartesianas no ponto.
  Ponto(float x=0, float y=0);
  // Método para setar a coordenada x do ponto.
  void setX(float nx);
  // Método para setar a coordenada y do ponto.
  void setY(float ny);
  // Método para setar as coordenadas x e y do ponto.
  void setXY(float nx,float ny);
  // Método para retornar a coordenada x do ponto.
  float getX(void);
  // Método para retornar a coordenada y do ponto.
  float getY(void);
  // Método que setar as coordenadas x e y do ponto 
  // com a soma dele mesmo com o ponto entrado com parâmetro.
  void add(Ponto p1);
  // Método que setar as coordenadas x e y do ponto 
  // com a subtração dele mesmo com o ponto entrado com parâmetro.
  void sub(Ponto p1);
  // Método que imprime a distância do ponto para a origem (0, 0).
  void norma(void);
  // Método que resposiciona o ponto adicionando 'a' a sua coordenada x
  // e 'b' a sua coordenada y.
  void translada(float a, float b);
  // Método que imprime o ponto no formato (x, y), sem pulo de linha.
  void imprime(void);
  // Método que retorno se o ponto é igual ao outro entrado como parâmetro.
  bool igual(Ponto p1);
};

#endif // PONTO_H