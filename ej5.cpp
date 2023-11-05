/*
Declarar una clase que toma un parámetro de plantilla,
el cual es una variable miembro (atributo) de la misma.
*/

#include<iostream>
#include<vector>

using namespace std;

//Declaración del template
template<typename T, typename X>
class Persona
{
    private:
        string nombre;
        int edad;
        vector<T> mascotas;
        X licenciaConducir;
    public:
    //Constructor
        Persona(string _nombre,int _edad, vector<T> _mascotas,X _licenciaConducir)
        {
            nombre = _nombre;
            edad = _edad;
            mascotas = _mascotas;
            licenciaConducir = _licenciaConducir;
        }
    //Destructor
        ~Persona(){};
    //Funciones miembro, en este caso un getter
    X getLicenciaConducir()
    {
        return licenciaConducir;
    }
    //Demas funciones miembro
    void agregarMascota(T nuevamascota)
    {
        mascotas.push_back(nuevamascota);
    }
    void presentarse()
    {   
        cout << "Me llamo " << nombre << ", mi edad es " << edad << " mis mascotas se llaman: ";
        for (const auto& mascota : mascotas) {
            cout << mascota << " ";
        }
        cout << "y por ultimo tengo mi licencia de conducir numero " << licenciaConducir << endl;
    }

};



int main(int argc,char **argv)
{
    //Creo un vector para poder pasarle datos al constructor
    vector<string> mascotas = {"Boby","Garfield","MIMI","Chanta"};

    //Tengo "castear" los datos genericos y volverlos concretos antes de seguirle pasando datos 
    //al constructor, es decir llenar con elementos "concretos" el "molde template"
    Persona<string,int> persona1 ("Cacho",38,mascotas,456978);

    persona1.agregarMascota("pepito");
    persona1.presentarse();


    return 0;
}