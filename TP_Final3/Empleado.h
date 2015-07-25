#define PROGRAMADOR 1
#define BETATESTER 2
#define GERENTE 3
#define ADMINISTRATVO 4

typedef struct S_Empleado{
	char nombre[20];
	int edad;
	int puesto;
}Empleado;


int empleado_setNombre(Empleado*, char*);

int empleado_setEdad(Empleado*, int);

int empleado_setPuesto(Empleado*, int);

int empleado_cargarEmpleado(Empleado*, char*, int, int);

void empleado_print(Empleado*);



char* puesto(Empleado*);
