 /*
2. El objetivo de este ejercicio es declarar una función de plantilla sencilla y ver algunas de sus posibilidades.
Se pide escribir una función menor que tome dos argumentos genéricos y
use el operador < para devolver el menor de ellos como valor de retorno. 
La función debe ser capaz de dar este tipo de resultados:
menor(2, 3) == 2
menor(6.0, 4.0) == 4.0
A continuación:
    a.  Comprobar su funcionamiento para parejas de argumentos numéricos del mismo tipo (int,double, float).
    b. 2. Comprobar que pasa si los argumentos son de distinto tipo (la respuesta dependerá de si se usó un parámetro de plantilla o dos para la declaración de la función, probar ambas posibilidades).
*/
#include<iostream>

using namespace std;

template<typename T>
T devolverMenorValor(T valorA,T valorB)
{
    if (valorA > valorB)
    {
        return valorB;
    }
    else 
    {
        return valorA;
    }
}

int main(int argc,char **argv)
{
    int a = 10;
    int b =20;

    cout << "El menor valor es: " << devolverMenorValor(a,b) << endl;

    float c = 30.856;
    float d = 789.654;

    cout << "El menor valor es: " << devolverMenorValor(c,d) << endl;

    double f = 105789.45;
    double g =78945.987;

    cout << "El menor valor es: " << devolverMenorValor(f,g) << endl;

    string h = "Hola!";
    string i = "Hola mundo!";

    //Puede retornar valor la función, aunque lo que devuelve no tiene sentido
    cout << "El menor valor es: " << devolverMenorValor(h,i) << endl;

    //Puedo usar la misma función sin declarar variables pasandolas como argumentos directamente
    //Aca paso dos datos numéricos de distinto tipo
    cout << "Paso de valor sin declarar antes variables " << endl;
    cout << "El menor valor es: " << devolverMenorValor(50,489) << endl;
    

    return 0;
}