/*
Las plantillas de clase en C++ son una forma de crear clases “genéricas” que pueden trabajar con diferentes tipos de datos.
Cuando defines una plantilla de clase, no especificas el tipo de datos exacto para algunos de sus miembros.
En lugar de eso, utilizas un parámetro de plantilla, que es un marcador de posición para un tipo de datos.
Luego, cuando creas un objeto de la clase plantilla, especificas el tipo de datos real que la plantilla debe usar.
*/

#include <iostream>

using namespace std;

//EjemploTemplate es una plantilla de clase que acepta un tipo de dato T.
template<typename T>
class EjemploTemplate
{
    private:
    //Variable miembro privada de tipo "genérico"
        T valor;
    public:
    //Constructor de la clase EjemploTemplate
    EjemploTemplate(T x)//Con esto digo, la variable x es del "tipo genérico T "
    {
        valor = x;
    }
    //Función miembro que retorna cuando sea invocada el dato que contenga la variable valor
    T getValor()
    {
        return valor;
    }
};



int main(int argc,char **argv)
{
    cout << "Valores impresos por pantalla que muestran el polimorfismo de los templates " << endl;

    //Creo un objeto de tipo int, que es una instancia de EjemploTemplate
    EjemploTemplate<int>objEntero(10);//Le paso al constructor el valor entero 10

    //Saco por pantalla el valor pasado al constructor, que recibe la función miembro del tipo getter
    cout << objEntero.getValor() << endl;

    //Aca se muestran el polimorfismo de los templates(estático), ya que con la misma función miembro, puedo enviar 
    //un tipo mensaje diferente.
    EjemploTemplate<double> objFloat(100.84);
    cout << objFloat.getValor() << endl;

    //Ahora para terminar de probar el valor genérico de los templates, paso un string
    EjemploTemplate<string> objString("Mi perro me llama");
    cout << objString.getValor() << endl;


    return 0;
}