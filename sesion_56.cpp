#include <iostream>

struct Cicla
{
    std::string color;
    int numeroLLantas{};
    std::string tipo;
};


void cambiarColor(Cicla &ciclaparacambio, std::string nuevoColor);  //IMPORTANTE LAS ESTRUCTURAS NO SE PASAN POR REFERENCIA
                                                                    //COMO LOS VECTORES ARREGLOS ENTRE OTROS PARA PASARLO USAR
                                                                    // & - AMPERSAND - DESREFERENCIADOR
                                                            

int main(){
    //Como pasar estructuras a funciones :D

    Cicla miCicla;

    miCicla.color = "Verde";
    miCicla.numeroLLantas = 3;
    miCicla.tipo = "Invalidos xdd";

    std::cout << miCicla.color << '\n';

    cambiarColor(miCicla, "Negro");

    std::cout << miCicla.color << '\n';

}

void cambiarColor(Cicla &ciclaparacambio, std::string nuevoColor){
    ciclaparacambio.color = nuevoColor;
}