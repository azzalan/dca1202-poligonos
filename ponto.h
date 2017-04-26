#ifndef PONTO_H
#define PONTO_H


class Ponto{
private:
  float x, y;
public:
  Ponto(float x=0, float y=0);
  void setX(float nx);
  void setY(float ny);
  void setXY(float nx,float ny);
  float getX(void);
  float getY(void);
  void add(Ponto p1);
  void sub(Ponto p1);
  void norma(void);
  void translada(float a, float b);
  void imprime(void);
  bool igual(Ponto p1);
};

#endif // PONTO_H