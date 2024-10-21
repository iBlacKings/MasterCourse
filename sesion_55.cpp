#include <iostream>
#include <vector>

struct Estudiante
{
    std::string nombre;
    double promedio;
    bool inscripto;
};


int main(){
    //Las estructuras y clases son muy similares pero tienen ciertas diferencias que hacen que elijamos una u otra pero en general
    //por practicas me recomiendo usar structurs unicamente cuando necesite agrupar datos no para crear metodos entre otras cosas
    //como una clase porque es mas practico en las structurs solo recopilas datos basicos 

    Estudiante estudiante1;
    estudiante1.nombre = "Camilo";
    estudiante1.promedio = 5.0;
    estudiante1.inscripto = true;

    std::cout << estudiante1.nombre << '\n';
    std::cout << estudiante1.promedio << '\n';
    std::cout << estudiante1.inscripto << '\n';

    std::vector<Estudiante> lista;
    lista.push_back(estudiante1);

    for(auto estudiante : lista){
        std::cout << estudiante.nombre << '\n';
    }

}