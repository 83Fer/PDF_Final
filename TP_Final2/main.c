#include <stdio.h>
#include <stdlib.h>

#include "ListaProducto.h"


int main(int argc, char *argv[]) 
{
	Producto producto;
	
	int indice, i;
	char resp = 's';
	
	lista_borrarLista();
	
	
	while(resp != 'n')
	{
		printf("\nIngrese el codigo: ");
		scanf("%d", &producto.codigo);
		fflush(stdin);
		
		printf("\nIngrese el precio: ");
		scanf("%f", &producto.precio);
		fflush(stdin);
		
		printf("\nIngrese la posicion en la lista: ");
		scanf("%d", &indice);
		fflush(stdin);
		
		if(lista_setProducto(&producto, indice) == 0)
			printf("\nError\n");
		else
			printf("\nProducto cargado\n");
			
		printf("\nDesea seguir ingresando productos? s/n: ");
		scanf("%c", &resp);
		fflush(stdin);
		
	}
	
	printf("\n\nPrecio mas alto de la lista: ");
	printf("\nCodigo\tPrecio");

	producto = *(lista_getMasCaro());

	printf("\n%d\t%.2f", producto.codigo, producto.precio);
	


	printf("\n\nBorra un producto, introduce un indice: ");
	scanf("%d", &indice);

	if(lista_borrar(&miProducto[indice]) == 0)
		printf("\nError");

	else
		printf("\nProducto borrado");
	
	
	
	printf("\n\nObtener un producto, ingrese el indice: ");
	scanf("%d", &indice);
	
	if(lista_getProducto(indice) == 0)
		printf("\nError");
		
	else
	{
		producto = *(lista_getProducto(indice));
		
		printf("\n\nCodigo\tPrecio");
		printf("\n%d\t%.2f", producto.codigo, producto.precio);
	}
	
	
	printf("\n\n\nLista completa: ");
	printf("\n\nCodigo\tPrecio");
	
	for(i = 0; i < TAMANIO; i++)
	{
		
		if(miProducto[i].flagLibre == 0)
			printf("\n%d\t%.2f\n", miProducto[i].codigo, miProducto[i].precio);
	}
	
	printf("\n\nBorrar Lista");
	
	lista_borrarLista();
	
	printf(" \n\nLista borrada");
	
	
	
	
	return 0;
}
