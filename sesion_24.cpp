#include <iostream>

int main(){
    // Bucles anidados

    int altura, largo;
    char simbolo;

    std::cout << "Ingrese la altura: ";
    std::cin >> altura;

    std::cout << "Ingrese el largo: ";
    std::cin >> largo;

    std::cout << "Ingrese el simbolo: ";
    std::cin >> simbolo;

    //For rectangulo

    // for(int i =0; i <= altura; i++){
    //     for(int i = 0; i <= largo; i++){
    //         std::cout << simbolo;
    //     }
    //     std::cout << "\n";
    // }

    //While rectangulo

    // int indexaltura = 0;
    // while(indexaltura != altura){
    //     int indexlargo = 0;
    //     while(indexlargo != largo){
    //         std::cout << simbolo;
    //         indexlargo++;
    //     }
    //     std::cout << std::endl;
    //     indexaltura ++;
    // }

    //Do while rectangulo
    
    int indexaltura = 0;
    do{
        int indexlargo = 0;
        do{
            std::cout << simbolo;
            indexlargo ++;
        } while (indexlargo < largo);
        indexaltura ++;
        std::cout << std::endl;
    } while (indexaltura < altura);
    

    return 0;
}