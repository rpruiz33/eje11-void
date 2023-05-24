#ifndef EDIFICIO_H_INCLUDED
#define EDIFICIO_H_INCLUDED
#include "edificio.h"
struct EdificioE;
typedef struct EdificioE * EdificioP;
EdificioP crearEdifico();
void destruirEdificio(EdificioP e);
void mostrar(EdificioP e);
void mostrarLista(Lista lista);

char *getNombre(EdificioP e);

void setNombre(EdificioP e, char nombre[30]);


void ordenarXnombre( Lista lista);
#endif // EDIFICIO_H_INCLUDED
