#include <stdio.h>
#include "lista.h"

int main(){
    Lista A;

    init(&A);
    
    stampa(&A);

    inserisci(&A, 4);
    stampa(&A);

    inserisci(&A, 9);
    stampa(&A);

    inserisci(&A, 1);
    stampa(&A);

    inserisci(&A, 7);
    stampa(&A);

    inserisci(&A, 6);
    stampa(&A);

    rimuovi(&A, 8);
    stampa(&A);

    rimuovi(&A, 13);
    stampa(&A);

    rimuovi(&A, 40);

    rimuovi(&A, 30);
    stampa(&A);

    clear(&A);
    
    return 0;
}
