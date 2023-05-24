#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "edificio.h"
#include "string.h"

struct EdificioE{
char nombre[30];

};

EdificioP crearEdifico(char nombre[30]){
EdificioP e=malloc(sizeof(struct EdificioE));

return e;


};
void destruirEdificio(EdificioP e){
free(e);

};
void mostrar(EdificioP e){

printf("\nel nombre del edificio es %s\n",e->nombre);


};

char *getNombre(EdificioP e){

return e->nombre;

}


void setNombre(EdificioP e, char nombre[30]){

strcpy(e->nombre,nombre);
};


void mostrarLista(Lista lista){

    for ( int i = 0; i< obtenerTamanio(lista); i++){

        EdificioP info = * ((EdificioP*) obtenerDato(lista, i));

        printf("[%s]", info->nombre );

    }

}
int obtenerTamanio ( Lista lista) {
    if (!lista)
        return -1;
    return getListaTamanio(lista);
}





/*void ordenarXnombre( Lista lista,EdificioP e[]) {
int tam=obtenerTamanio(lista);

    Nodo actual;

    Nodo  aux;

    EdificioP intercambio;

    for (int i = 0; i < tam; i++) {

        actual = getListaPrimero(lista);

        for (int j = 0; j < tam - 1; j++) {
            if (strcmp( e[j]->nombre, e[j+1]->nombre)==1){
                //setData(aux,getData(actual));
                intercambio=e[j];


               // setData(actual,getData(getSiguiente(actual)));
                e[j]=e[j+1]->nombre;

           // setData(actual,getData(aux));
            e[j+1]=intercambio;




            }
            actual = getSiguiente(actual);
        }


    }
}
*/
