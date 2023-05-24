#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#include "edificio.h"

int main()
{
    void *backup;
    Lista listaE = crearLista(sizeof(EdificioP));
    printf("LISTA DE EDIFICIOS-SIMPLE ENLACE-VOID");
    int tam=obtenerTamanio(listaE);
    EdificioP x[tam];
     x[0] = crearEdifico();
    setNombre(x[0], "Ar");
    insertarInicio(listaE, &x[0]);
    EdificioP x1 = crearEdifico();
    setNombre(x1, "Manzo");
    insertarInicio(listaE, &x1);
    x[2] = crearEdifico();
    setNombre(x[2], "Ortiz");
    insertarInicio(listaE, &x[2]);
    x[3] = crearEdifico();
    setNombre(x[3], "Tita");
    insertarInicio(listaE, &x[3]);
    //removerFinal(listaE,backup);
    printf("\n\n----------LISTA----------------\n");
    mostrarLista(listaE);
    ordenarXnombre(listaE);
    printf("\n\n----------ORDENADO-------------\n");
    mostrarLista(listaE);
    printf("\n\n---------BUSQUEDA-------------\n");
    printf("esta en las pos : %d\n",busqueda(listaE,"Tita"));
    printf("\n\n----------------------------\n");
    removerInicio(listaE,&backup);

    mostrarLista(listaE);
    printf("\n------------FIN----------------\n");
    removerFinal(listaE,&backup);
    mostrarLista(listaE);
    return 0;
}
