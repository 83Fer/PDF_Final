#include <stdio.h>
#include <stdlib.h>


#include "Empleado.h"


int main(int argc, char *argv[]) 
{
	
	Empleado empleado;
	
	char nombre[20];
	int edad;
	int puesto;
	
	
	printf("\nIngrese el nombre: ");
	gets( nombre);
	fflush(stdin);
	
	printf("\nIngrese la edad: ");
	scanf("%d", &edad);
	
	printf("\n1_PROGRAMADOR\n2_BETATESTER\n3_GERENTE\n4ADMINISTRATIVO\n");
	printf("\nIngrese el puesto de la lista: ");
	scanf("%d", &puesto);
	
	
	if( empleado_cargarEmpleado(&empleado, nombre, edad, puesto))
		printf("\nCarga con exito");
	else
		printf("\nCarga fallida");
	
	
	printf("\n\nMuestra empleado\n");
	empleado_print(&empleado);
	
	
	return 0;
}
