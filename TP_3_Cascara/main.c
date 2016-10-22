#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
    no puedo realizar este trabajo practico
    porque aun no llegamos a ver archivos
    en clase
**/


int main()
{
    char seguir='s',opcion;


    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Generar pagina web\n");
        printf("4- Salir\n");

        fflush(stdin);
        scanf("%c",&opcion);

        switch(opcion)
        {
            case '1':
                break;
            case '2':
                break;
            case '3':
               break;
            case '4':
                seguir = 'n';
                break;
            default:
                printf("ERROR!!!. ingrese una de las opciones correctas\n");
        }
    }

    return 0;
}
