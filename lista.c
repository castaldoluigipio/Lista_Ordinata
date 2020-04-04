# include  <stdio.h>
# include  <stdlib.h>
# include  "lista.h"
# include  "nodo.h"

void init(Lista * A){
    A-> head = NULL ;
    A-> counter = 0 ;
}

void stampa(Lista * A){
    Nodo * n = A-> head ;

    printf("[% d]", A-> counter);

    while(n != NULL ) {
        printf ("% d", n-> val);
        n = n-> next;
    }
    printf ("NULL \n");
}

void inserisci(Lista * A, int val){
	
	Nodo * n=A-> head ;
    Nodo * v = NULL ;

    Nodo * a = malloc ( sizeof (Nodo));
    a-> val = val;
    a-> next = NULL ;

    while (n != NULL && n-> val <val) {
        v = n;
        n = n-> next;
    }

    if (v == NULL ) {
        a-> next = A-> head ;
        A-> head = a;
    }else{
        v-> next = a;
        a-> next = n;
    }

    A-> counter ++;
}

void rimuovi(Lista * A, int val){
    Nodo * n = A-> head ;
    Nodo * v = NULL ;
    Nodo * a = NULL ;

    while (n != NULL && n-> val <val) {
        v = n;
        n = n-> next ;
    }

    if (n == NULL ) {
        printf ("Elemento % d non trovato \n", val);
        return ;
    }

    printf ("Elemento % d trovato \n", val);
    A-> counter --;

    if (v == NULL ) {
        printf ("L'elemento da eliminare e' in testa \n");
        
        a = A-> head ;           
        A-> head = A-> head -> next ;  
        free(a);               
        return ;
    }

    printf ("L'elemento da eliminare non e' in testa \n");
    a = v-> next ;
    v-> next = a-> next ;
    free(a);
}

void clear(Lista * A){
    Nodo * a;
    Nodo * n = A-> head ;

    while (n != NULL ) {
        a = n;    
        n = n-> next ;
        
        printf ("Pulisci il nodo con valore %d \n", a-> val );
        free(a);
    }

    A-> head = NULL ;
    A-> counter = 0 ;
}
