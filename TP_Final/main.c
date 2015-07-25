#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Auto.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char marca[20];
	int modelo;
	int color;
	char patente[20];
	

	Auto S_auto;
	
	
	printf("\nIngrese la Marca: ");
	gets( marca);
	fflush(stdin);
	
	printf("\nIngrese el modelo: ");
	scanf("%d", &modelo);
	
	printf("\n1_Rojo\n2_Verde\n3_Azul\n4Gris\n5_Negro\n6_Blanco\n");
	printf("\nIngrese el color de la lista: ");
	scanf("%d", &color);
	
	printf("\nIngrese la patente: ");
	fflush(stdin);
	gets(patente);
	
	
	if( auto_cargarAuto(&S_auto, marca, modelo, color, patente))
		printf("\nCarga con exito");
	else
		printf("\nCarga fallida");
	
	
		
	return 0;
}
