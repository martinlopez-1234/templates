#include <iostream>

using namespace std;

//Plantilla "común"
template <typename T>
void imprimir(T valor) 
{
    std::cout << valor << std::endl;
}
//Especialización de plantilla que adopta un nuevo comportamiento cuando encuentra el tipo de dato
//al que deseo agregarle una variación
template <>
void imprimir(int valor) 
{
    cout << "El valor es un número entero: " << valor << endl;
}

int main(int argc,char **argv)
 {
    //Imprime "El valor es un número entero: 123"
    imprimir(123); 
    //Imprime "Hola, mundo"
    imprimir("Hola, mundo"); 
    return 0;
}
