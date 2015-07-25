#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "Auto.h"

int auto_setMarca(Auto* pAuto, char* marca)
{
	if(3 > strlen(marca))
		return 0;
	else 
	{
		strcpy(pAuto->marca, marca);
		return 1;
	}
		
}


int auto_setModelo(Auto* pAuto, int modelo)
{
	if(modelo < 1970 || modelo > 2015)
		return 0;
	else
	{
		pAuto->modelo = modelo;
		return 1;
	}
}

int auto_setColor(Auto* pAuto, int color)
{
	switch(color)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			
				pAuto -> color = color;
				break;
		default:
			return 0;
	}
	
	return 1;
}

int auto_setPatente(Auto* pAuto, char* patente)
{
	if(strlen(patente) < 3)
		return 0;
		
	else
	{
		strcpy(pAuto->patente, patente);
		return 1;
	}
}

int auto_cargarAuto(Auto* pAuto, char* marca, int modelo, int color, char* patente)
{
	if(auto_setMarca( pAuto, marca))
	{
		if(auto_setModelo( pAuto, modelo))
		{
			if(auto_setColor( pAuto, color))
			{
				if(auto_setPatente( pAuto, patente))
				{
					
					return 1;
				}
			}
		}
	}
	else
		return 0;
}
