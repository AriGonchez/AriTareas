#include "NodoArbolBinario.h"
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <list>          // std::list
using namespace std;

//Devuelve la suma de todos los numeros del arbol con la raiz dada.
int suma(NodoArbolBinario* raiz)
{
     if(raiz==NULL)
    return 0;

    int suma_t = raiz->num;
    suma_t += suma(raiz->hijo_der) + suma(raiz->hijo_izq);
    return suma_t;
}

//Devuelve la cantidad de nodos que tiene el arbol con la raiz dada.
int cantidadNodos(NodoArbolBinario* raiz)
{
    int contador =0;

    if(raiz==NULL)
    return 0;

    contador++;
    contador += cantidadNodos(raiz->hijo_der)+cantidadNodos(raiz->hijo_izq);
    return contador;
}

//Devuelve el promedio de los numeros que tiene el arbol con la raiz dada.
int promedio(NodoArbolBinario* raiz)
{
    return suma(raiz)/cantidadNodos(raiz);
}

int cuantosPasos(NodoArbolBinario* raiz,int num)
{
    int contador =1;
    if(raiz==NULL)
    return contador;

    if(raiz->num == num)
        return contador;


    if(num>raiz->num)
        contador += cuantosPasos(raiz->hijo_der,num);

    if(num<raiz->num)
        contador += cuantosPasos(raiz->hijo_izq,num);
    return contador;
}

//Devuelve la cantidad de hojas que tiene el arbol con la raiz dada
int sumaHojas(NodoArbolBinario* raiz)
{
   return 0;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
