#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int main()
{
    char seguir='s',validarDni[8];
    EPersona lista[CANT];
    int opcion=0,i,ubicacion,cargarDni;


    for (i=0;i<CANT;i++)
        lista[i].estado=0;


    while(seguir=='s')
        {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
            {
            case 1:

                ubicacion=obtenerEspacioLibre(lista);
                if (ubicacion!=-1)
                lista[ubicacion]=AgregarPersona(lista);
                else
                    printf("\nERROR!!!!! No hay espacios disponibles para guardar otra persona.\n");

                break;
            case 2:
                printf("I");
                do{
                printf("ngrese el dni de la persona a borrar: ");
                fflush(stdin);
                cargarDni=validarNumero(gets(validarDni));
                }while(cargarDni==0);
                ubicacion=buscarPorDni(lista,cargarDni);
                lista[ubicacion]=borrarPersona(lista[ubicacion],ubicacion);
                break;
            case 3:
                ordenamientoFunc (lista);
                break;
            case 4:
                graficoEdades (lista);
                break;
            case 5:
                seguir = 'n';
                break;
            }

        }

    return 0;
}
