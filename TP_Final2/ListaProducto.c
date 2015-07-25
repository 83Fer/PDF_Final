#include<stdio.h>
#include<stdlib.h>

#include "ListaProducto.h"

	

void lista_borrarLista(void)
{
	int i;
	
	for(i = 0; i < TAMANIO; i++)
	{
		miProducto[i].flagLibre = 1;
	}
	
}

Producto* lista_getProducto(int indice)
{
	if(indice < 0 || indice >TAMANIO || miProducto[indice].flagLibre == 1)
		return 0;
		
	else
		return &miProducto[indice];
		
}

int lista_setProducto(Producto* pProducto, int indice)
{
	int i;
	
	if(indice < 0 || indice >= TAMANIO)
		return 0;
		
	for(i = 0; i < TAMANIO; i++)
	{
		if(miProducto[i].flagLibre == 1 && miProducto[i].codigo == pProducto->codigo)
			return 0;
	}
	
	miProducto[indice].codigo = pProducto->codigo;
	miProducto[indice].precio = pProducto->precio;
	miProducto[indice].flagLibre = 0;
	
	return 1;
}


Producto* lista_getMasCaro()
{
	int i ;
	int indiceMayor = 0;
	float precioMayor = -1;
	
	for(i = 0; i < TAMANIO - 1; i++)
	{
		if(miProducto[i].flagLibre == 0 && miProducto[i].precio > precioMayor)
		{
			indiceMayor = i;
			precioMayor = miProducto[i].precio;
		}
	}
	
	if(precioMayor == -1)
		return 0;
		
	return &miProducto[indiceMayor];
	
}


int lista_borrar(Producto* pProducto)
{
	int i;
	
	for(i = 0; i < TAMANIO; i++)
	{
		if(miProducto[i].flagLibre==0 && miProducto[i].codigo == pProducto->codigo)
		{
			miProducto[i].flagLibre = 1;
			return 1;
		}
	}
	
	return 0;
	
}
