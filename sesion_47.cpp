#include <iostream>

void imprimirCarro(std::string const &coche, std::string const &color);

int main(){
    //In c++ we can protect the parameters that we send to a functions this is mostly for the parameters that we send with the memory direcction
    //but also u can use for the value idk why u would do it may be to say to everyone of ur team that the can't change the value idk <3

    std::string coche = "Porsche 911";
    std::string color = "Purpura";

    imprimirCarro(coche, color);
}

void imprimirCarro(std::string const &coche, std::string const &color){
    
    //If i put this and on the parameters we don't have the reserved work "const" this will change the value of the car
    //coche = "Guanabana";
    //color = "KAKITA";

    std::cout << "Carro: " << coche << std::endl;
    std::cout << "Color: " << color << std::endl;
}