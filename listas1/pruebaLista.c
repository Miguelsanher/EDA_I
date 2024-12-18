#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
int purga(Lista *l);

int main(int argc, char *argv[])
{   Lista miLista;
    tipoPosicion p;
    int numElementos = 20, codigoError,i;

	if (argc > 2) {
            printf("\n Uso: ./pruebaLista <número de elementos de la lista>\n\n");
            return -1;
        }
       if (argc==2) 
		numElementos=atoi(argv[1]); 


    printf("Se crea una lista de %d elementos\n", numElementos);
    anula(&miLista);	
    p = primero(&miLista);
    printf("\n\n");
    for (i = 0; i < numElementos; i++) { 
    	codigoError = inserta(rand()%100,p,&miLista);
    	p = siguiente(p,&miLista);
        printf("%d ",ultimo(&miLista));
    	}
        printf("\n\n");
    imprime(&miLista);

  // Implementar resto de operaciones para probar que el algortimo
  // purga elimina los elementos repetidos de la lista

     printf("\nEliminando repetidos (¡¡ SOLO si se implementan todas las operaciones que faltan!! \n");
     purga(&miLista);
     inserta(4,1,&miLista);
     imprime(&miLista);
     suprime(4,&miLista);
     printf("\n\n");
     imprime(&miLista);
     int a= localiza(44,&miLista);
     printf("\n\n el numero 44 esta en la posicion %d",a);
     //recupera(7,&miLista);
     printf("\n\nEl numero en la pos 7 es: %d",recupera(7,&miLista));
    return 0;
}

int purga(Lista *l)
{  tipoPosicion act, sig;
    
    act = primero(l);
    while (act != fin(l)) {
        sig = siguiente(act,l);
        while (sig != fin(l)) {
            if (recupera(act,l) == recupera(sig,l))
                suprime(sig, l);
            else
                sig = siguiente(sig,l);
        }
        act = siguiente(act,l);
    }
    return 0;
}



