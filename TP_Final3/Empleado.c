#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#include "Empleado.h"



int empleado_setNombre(Empleado* pEmpleado, char* nombre)
{
	if(strlen(nombre) < 3 || strlen(nombre) > 20)
		return 0;
		
	else
	{
		strcpy(pEmpleado -> nombre, nombre);
		return 1;
	}
}

int empleado_setEdad(Empleado* pEmpleado, int edad)
{
	if(edad < 18 || edad > 70)
		return 0;
		
	else
	{
		pEmpleado -> edad = edad;
		return 1;
	}
}

int empleado_setPuesto(Empleado* pEmpleado, int puesto)
{
		switch(puesto)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			
				pEmpleado -> puesto = puesto;
				break;
		default:
			return 0;
	}
	
	return 1;
}

int empleado_cargarEmpleado(Empleado* pEmpleado, char* nombre, int edad, int puesto)
{
	if(empleado_setNombre( pEmpleado, nombre))
	{
		if(empleado_setEdad( pEmpleado, edad))
		{
			if(empleado_setPuesto( pEmpleado, puesto))
			{
					
				return 1;
				
			}
		}
	}
	else
		return 0;
}


void empleado_print(Empleado* pEmpleado)
{
	printf("\nNombre\tEdad\tPuesto\t");
	printf("\n%s\t%d\t%s\t\n\n", pEmpleado -> nombre, pEmpleado -> edad, puesto(pEmpleado));
}




char* puesto(Empleado* pEmpleado)
{
	char* pPuesto;
	
	switch(pEmpleado->puesto)
	{
		case 1:
			strcpy(pPuesto, "PROGRAMADOR");
			break;
			
		case 2:
			strcpy(pPuesto, "BETATESTER");
			break;
			
		case 3:
			strcpy(pPuesto, "GERENTE");
			break;
			
		case 4:
			strcpy(pPuesto,"ADMINISTRATIVO");
	}
		
	return pPuesto;


		
}
