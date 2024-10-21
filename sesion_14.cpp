#include <iostream>

int main(){

    //Ternario operator ?: = es un reemplazo para usar una declaracion if else
    // condicion ? expresion1 : expresion2;

    int grade = 75;


    // Normalmente usariamos los condicionales de esta manera pero tambien podriamos usar ternario

    if(grade >= 60){
        std::cout << "GOOD\n";
    }
    else{
        std::cout << "BAD\n";
    }

    // Ternario:

    grade >= 60 ? std::cout << "GOOD\n" : std::cout << "BAD\n"; 

    int numer = 8;

    numer % 2 ? std::cout << "Impar\n" : std::cout << "Par\n";

    // Recuerda que 0 es falso y 1 verdadero por lo que si el resultado es 0 es par 

    bool hambriento = true;

    hambriento ? std::cout << "Tienes hambre\n" : std::cout << "No tienes hambre\n";


    return 0;

}