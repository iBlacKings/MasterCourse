// This is how we import a module in C++

#include <iostream> // This is a library that we use to print in the console 
                    // and get input from the user


int main() {
    std::cout << "Hola Mundo "; 
    std::cout << "Soy un programador de C++"<< std::endl;
    // Lo que se mostrara sera "Hola Mundo Soy un programador de C++" debido a que no decimos que salte la linea
    // aqui debemos definir que el programa debe saltar la linea con el comando 
    // endl o "\n" EJEMPLO:

    std::cout << "Hola Mundo \n";
    std::cout << "Soy un programador de python en C++ ayuda";

    // If i wanna make a skip line with a variable you can use the endl command or "\n" command
    // but in the case of variable if u wanna use the "\n" u need to do it like this:

    int numero = 10;
    std::cout << "El numero es: " << numero << "\n";

    /*
    This is how you can make a comment in C++
    of multiple lines
    to not put all the time the "//" command
    fckig u camilo <3 
    */

    return 0;
}