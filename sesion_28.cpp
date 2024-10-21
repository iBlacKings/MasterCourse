#include <iostream>

// Functions in C++: A good practice in C++ is to declare functions at the beginning of the file and then built it at the end or down the main.
// If you use a function in another function (like in the main), but you haven't declared it beforehand,
// the program won't recognize it.

// Declare the functions and don't built it:

void felizCumpleanos(std::string nombre, int edad); // Here we declare it if we want that it had parameters we only need to 
                                                    // define the type and sep by a comma

int main(){

    std::string nombre = "Camilo";
    int edad = 18;

    felizCumpleanos(nombre, edad); // To call the function we only need to put the name and parenthesis with the needed parameters
}

// BUILT OF THE FUNCTION 

void felizCumpleanos(std::string nombre, int edad){ //To built the function we are going like declare it but now the open keys to make the code
    std::cout << "Feliz Cumpelaños a ti\n";
    std::cout << "Feliz Cumpelaños a ti\n";
    std::cout << "Feliz Cumpelaños " << nombre<<"\n";
    std::cout << "Feliz Cumpelaños a ti\n";
    std::cout << "Tu edad ahora es de " << edad;


}