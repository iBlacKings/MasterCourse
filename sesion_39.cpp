//Find the posicion of an element of an array

#include <iostream>
#include <string>

int encontrarPosicionString(std::string array[], int tam, std::string element);

int main(){
    std::string coches[] = {"GTR 34", "PORCHE 911", "CORVETTE", "SPIDER F1"};
    int tam = sizeof(coches)/sizeof(std::string);
    std::string elemento;

    std::cout << "Ingrese el coche que desea: ";
    std::getline(std::cin, elemento);  // Leer la entrada del usuario con getline


    int posicion = encontrarPosicionString(coches, tam, elemento);
    if(posicion != -1){
        std::cout << "La posicion de tu coche es: " << posicion;
    }
    else{

        std::cout << "Tu coche no esta en este garaje!!";
    }


}

int encontrarPosicionString(std::string array[], int tam, std::string element){
    for(int i = 0; i < tam; i++){
        if(array[i]==element){
            return i;}
    }
    return -1; //Menos uno significa que no se encontro lo que se buscaba(centinela) no significa especificamente un error
                // si no una situacion especial dependiendo de como lo queramos tomar.
}

