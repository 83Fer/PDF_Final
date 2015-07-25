#define TAMANIO 100

struct S_Producto{
	int codigo;
	float precio;
	int flagLibre;
};


typedef struct S_Producto Producto;


Producto miProducto[TAMANIO];


void lista_borrarLista(void);

Producto* lista_getProducto(int);

int lista_setProducto(Producto*, int);

Producto* lista_getMasCaro(void);

int lista_borrar(Producto*);
	
	
