#include <iostream>

int main(){

    double temp;
    char op;

    std::cout << "***** CONVERSION DE TEMPERATURA *****\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "Unidad a convertir:\n";
    std::cin >> op;

    if(op == 'F' or op == 'f'){
        std::cout << "Ingrese la temperatura en Celsius: ";
        std::cin >> temp;
        temp = (temp*(9.0/5.0))+32;
        std::cout << "Los grados fahrenheit son " << temp << " F°\n";
        }
    else if (op == 'C' || op == 'c')
    {
        std::cout << "Ingrese la temperatura en fahrenheit: ";
        std::cin >> temp;
        temp = (temp-32)/(9.0/5.0);
        std::cout << "Los grados Celsius son " << temp << " C°\n";
    }
    else{
        std::cout << "Ingrese una unidad valida (c/f)";
    }

    std::cout << "*************************************\n";


}