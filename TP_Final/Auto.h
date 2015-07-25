#define ROJO 1
#define VERDE 2
#define AZUL 3
#define GRIS 4
#define NEGRO 5
#define BLANCO 6


typedef struct S_Auto{
	char marca[20];
	int modelo;
	int color;
	char patente[8];
}Auto;




int auto_setMarca(Auto*, char*);

int auto_setModelo(Auto*, int);

int auto_setColor(Auto*, int);

int auto_setPatente(Auto*, char*);

int auto_cargarAuto(Auto*, char*, int, int, char*);
