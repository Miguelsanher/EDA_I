/*
 * esquemas.c		Ejercicios sobre esquemas algoritmicos
 *
 *  Created on: 01/12/2014
 *      Author: M José Polo
 */
#include "esquemas.h"
// Enunciado 1 Torres de Hanoi
void Hanoi(int n,int origen, int destino, int aux)
{ if (n>0)
     {	  Hanoi(n-1,origen, aux, destino);
          printf(" Mueve dico n %d desde %d a %d \n",n, origen, destino);
          Hanoi(n-1, aux,destino, origen);
     }
}
void HanoiERC(int n,int origen, int destino, int aux)
{

}
// Enunciado 2: búsqueda ternaria (recuperamos funciones de otras sesiones...crearVector, ordenar....)
// Es mejor que la búsqueda binaria??? análisis y comparativa!!!
int bTernaria(int *vector, int base, int tope,int x)
{ 
}



// Enunciado 3: Versiones iterativa y Divide y Vencerás. Cúal es mejor??? análisis y comparativa!!!
long int potDyV(long int a, int n)
{

}


