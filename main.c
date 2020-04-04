#include <stdio.h>
#include "lista.h"

int main(){
    Lista A;

    init(&A);
    
    stampa(&A);

    inserisci(&A, 3);
    stampa(&A);

    inserisci(&A, 7);
    stampa(&A);

    inserisci(&A, 10);
    stampa(&A);

    inserisci(&A, 2);
    stampa(&A);

    inserisci(&A, 5);
    stampa(&A);

    rimuovi(&A, 2);
    stampa(&A);

    rimuovi(&A, 5);
    stampa(&A);

    rimuovi(&A, 50);

    rimuovi(&A, 10);
    stampa(&A);

    clear(&A);
    
    return 0;
}
