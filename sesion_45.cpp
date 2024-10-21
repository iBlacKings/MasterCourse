#include <iostream>

int main(){
    //Memory directions:

    //To get the direction of a variable in c++ we use &(ampersand / operador de bits)

    std::string nombre = "Camilo";
    float numeroFavorit = 7.0;
    int edad = 18;
    bool hombre = true;


    //putting the operator & (ampersand) we will know the direction of memory where the vairable is it also we can know the lenght in memory

    std::cout << &nombre << std::endl;
    std::cout << &numeroFavorit << std::endl;
    std::cout << &edad << std::endl;
    std::cout << &hombre << std::endl;

}