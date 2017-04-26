# dca1202-poligonos

Projeto avaliativo para a turma 2 do componente curricular DCA1202 do curso de Bacharelado em Ciência e Tecnologia da UFRN, período 2017.1.

<h1> DOCUMENTAÇÂO </h1>

<h2>CLASSE: Ponto </h2>

<h4>-Atributos privados</h4>
 
// Coordenada x do ponto
float x

// Coordenada y do ponto
float y
 
<h4>-Métodos públicos</h4>

// Construtor, x e y representam as coordenas cartesianas no ponto.
Ponto(float x=0, float y=0)
  
// Método para setar a coordenada x do ponto.
void setX(float nx)

// Método para setar a coordenada y do ponto.
void setY(float ny)

// Método para setar as coordenadas x e y do ponto.
void setXY(float nx,float ny)

// Método para retornar a coordenada x do ponto.
float getX(void)

// Método para retornar a coordenada y do ponto.
float getY(void)

// Método que setar as coordenadas x e y do ponto 
// com a soma dele mesmo com o ponto entrado com parâmetro.
void add(Ponto p1)

// Método que setar as coordenadas x e y do ponto 
// com a subtração dele mesmo com o ponto entrado com parâmetro.
void sub(Ponto p1)

// Método que imprime a distância do ponto para a origem (0, 0).
void norma(void)

// Método que resposiciona o ponto adicionando 'a' a sua coordenada x
// e 'b' a sua coordenada y.
void translada(float a, float b)

// Método que imprime o ponto no formato (x, y), sem pulo de linha.
void imprime(void)

// Método que retorno se o ponto é igual ao outro entrado como parâmetro.
bool igual(Ponto p1)


<h2>CLASSE: Poligono</h2>

<h4>-Atributos privados</h4>

Ponto vertices[100]
int numero_de_vertices
  
<h2>-Métodos públicos</h2>
  
// Método para fazer a entrada manual dos vértices, o número máximo de vértices
// é 100. A entrada para ao atingir o ponto original.
void inserirVertices(void)

// Método que returna o número de vértices do polígono.
int getNumeroDeVertices(void)

// Método que imprime as coordenadas dos vértices do polígono no formato:
// (x0,y0)→(x1,y1)→(x2,y2)→…​
void imprime(void)

// Método que resposiciona o polígono, o movendo a distância 'a' pela coordenada x
//  e a distância 'b' pela coordanada y.
void translada(float a, float b)

// Método que imprime a área do polígono.
void imprimeArea(void)

// Método que retorna a área do polígono.
float getArea(void)

// Método que reposiona o polígono o rotacionando na quantidade 'angulo' em graus, usando como
// ponto de apoio o ponto 'apoio'.
void rotacionar(float angulo, Ponto apoio)

// Método que seta um vértice específico do polígono usando sua posíção no array 'vertices'. 
void setVertice(int posicao, float x, float y)

// Método que retorna um vértice específico do polígono usando sua posíção no array 'vertices'.
Ponto getVertice(int posicao)

// Método que seta o número de vértices do polígono.
void setNumeroDeVertices(int numero_de_vertices)

