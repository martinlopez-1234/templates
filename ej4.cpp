/*
Declarar una función que toma dos parámetros de plantilla distintos
de los  cuales uno es el tipo de retorno y el otro es argumento.
*/

#include <iostream>

using namespace std;

template <typename T>
T imprimirPorPantalla(T retorno)
{
    cout << retorno << endl;
    //Retorno de la función
   return retorno;
}

int main(int argc,char **argv)
{
    int a = 10;
    string b = "Hola mundo!";
    float c =35.78;

    imprimirPorPantalla(a);
    imprimirPorPantalla(b);
    imprimirPorPantalla(c);


    return 0;
}

