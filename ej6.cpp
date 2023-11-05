/*
Declarar una clase que toma dos parámetros de plantilla,
uno como argumento al constructor y 
otro como tipo de retorno de una función miembro (método) sin argumentos.
*/


#include <iostream>

using namespace std;

//Creo template para poder trabajar con datos genéricos
template<typename T, typename U>
class ClaseEjemplo
{
    private:
        T parametroConstructor;

    public:
        //Constructor que toma argumento del tipo T
        ClaseEjemplo(T _parametroConstructor)
        {
            parametroConstructor = _parametroConstructor;
        }
    //Función miembro que no toma argumentes y devuelve valor del tipo U
    U funcionMiembroConRetorno()
    {
        return U();
    }
    //Función miembro que muestra por pantalla el argumento de la función con retorno
    void ImprimirPorPantalla()
    {   //Guardo en una variable del tipo U, el valor que devuelva la función funcionMiembroConRetorno
        U valor = funcionMiembroConRetorno();
        cout << "El valor de la devolución de función es " << valor << endl;
    }


};


int main(int argc,char **argv)
{   
    ClaseEjemplo<string,int> ejemplo1("Hola mundo");
    ejemplo1.ImprimirPorPantalla();

    return 0;
}