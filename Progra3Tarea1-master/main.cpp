#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    int suma=a+b;
    return suma;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    int resta=a-b;
    return resta;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    int multiplica=a*b;
    return multiplica;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    int division=a/b;
    return division;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b)
    {
        return a;
    }else
    {
     return b;
    }
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a<b)
    {
        return a;
    }else
    {
     return b;
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }if(b>a && b>c)
    {
         return b;
    }else
    {
        return c;
    }
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
 arreglo[posicion]=valor;

}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
}
//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int n_mayor =0;
    int contador;

    for (contador=0; contador<tamano; contador++)
    {
    if (arreglo[contador]>n_mayor)
    {
    n_mayor=arreglo[contador];
    }
    }

    return n_mayor;
}


//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int n_menor =99;
    int contador;

    for (contador=0; contador<tamano; contador++)
    {
    if (arreglo[contador]<n_menor)
    {
    n_menor=arreglo[contador];
    }
    }

    return n_menor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
   int suma=0;
   int promedio;
   int contador;

   for(contador=0; contador<tamano; contador++)
   {
       suma+=arreglo[contador];
       promedio=suma/tamano;
   }
      return promedio;


}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
