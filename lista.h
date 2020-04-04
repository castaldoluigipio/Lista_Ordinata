#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

struct lista {
    Nodo *head;
    int counter;
};
typedef struct lista Lista;

void init(Lista *A);
void stampa(Lista *A);
void inserisci(Lista *A, int val);
void rimuovi(Lista *A, int val);
void clear(Lista *A);

#endif
