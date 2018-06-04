#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{

ArrayList* listaEmpleado;


Employee* miEmpleado;
Employee* miEmpleado2;
Employee* aux;

miEmpleado = (Employee*) malloc(sizeof(Employee));
miEmpleado2 =  (Employee*) malloc(sizeof(Employee));

employee_setId(miEmpleado,7);
strcpy(miEmpleado->name, "juan");
miEmpleado->isEmpty=1;
strcpy(miEmpleado->lastName, "Gomez");

employee_setId(miEmpleado2,78);
strcpy(miEmpleado2->name, "Trevor");
miEmpleado2->isEmpty=1;
strcpy(miEmpleado2->lastName, "Fernandez");


listaEmpleado = al_newArrayList(); // tengo instanciado en memoria 1 arraylist

al_add(listaEmpleado, miEmpleado);
al_add(listaEmpleado, miEmpleado2);

printf("Elementos: %d\n",al_len(listaEmpleado));


for(int i=0;i<2;i++)
{
    aux = (Employee*) al_get(listaEmpleado,i);
    employee_print(aux);
}
    return 0;
}
