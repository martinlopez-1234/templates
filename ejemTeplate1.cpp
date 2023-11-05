#include <iostream>

using namespace std;

template <typename T>
//Prototipo de función del tipo void con un tipo de dato genérico
void mostrarAbs (T numero);

int main(int argc,char **argv)
{
    //Declaración de valor que va a ser pasado a la función
    int num = 10;
    
    //Invocación de función
    mostrarAbs(num);

    //Declaro número de otro tipo para mostrar la capacidad de crear funciones genéricas de
    //los templates
    double num1 = 13.007594;

    //Invocación de función
    mostrarAbs(num1);
    
    return 0;
}

//Declaro una plantilla de función 
template <typename T>
void mostrarAbs (T numero)
{
    if (numero < 0)
    {
        numero = numero * -1;
    }
    cout << "El valor absoluto del número es " << numero << endl;
}

