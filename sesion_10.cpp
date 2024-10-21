#include <iostream>
#include <cmath>

int main(){

    double a, b, c;

    std::cout << "Ingrese el valor del lado a: ";
    std::cin >> a;

    std::cout << "Ingrese el valor del lado b: ";
    std::cin >> b;

    c = std::sqrt((std::pow(a, 2))+(std::pow(b, 2)));

    std::cout << "El valor de la Hipotenusa de tu triangulo es de " << c;

    return 0;
}