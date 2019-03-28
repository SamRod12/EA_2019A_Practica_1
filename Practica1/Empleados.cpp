#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Empleado {
	char nombre[100];
	char numeroDeEmpleado[10];
	unsigned int edad;
	char numeroDeSeguro[14];
};

int main(int argc, char** argv) {
	
	struct Empleado empleados[1];
	
	printf("ingrese el nombre: ");
	scanf("%99[^\n]",empleados[0].nombre);
	printf("ingrese la edad: ");
	scanf("%d", &empleados[1].edad);
	printf("ingrese el numero de empleado: ");
	scanf("%s", empleados[0].numeroDeEmpleado);
	printf("ingrese el numero de seguro: ");
	scanf("%s", empleados[0].numeroDeSeguro);
	printf("%s %d %s %s",empleados[0].nombre, empleados[0].edad,empleados[0].numeroDeEmpleado,empleados[0].numeroDeSeguro);
	
	FILE *filepointer;
	filepointer = fopen("empleados.txt", "r+");		
	fprintf(filepointer, "%s %d %s %s\n",empleados[0].nombre,empleados[0].edad,empleados[0].numeroDeEmpleado,empleados[0].numeroDeSeguro);
	fclose(filepointer);
	
	return 0;
}
