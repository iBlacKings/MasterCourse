#include <iostream>

int main(){
    // Do while con el podremos por lo minimo realizar una vez un bloque del codigo y luego comprobarlo para que se vuelv a ejecutar o no

    int numero;

    // Asi se realiza normalmente sin el bucle do while, este es muy largo asi q no nos sirve mucho

    //std::cout << "Ingrese un numero positivo: ";
    //std::cin >> numero;

    // while(numero < 0){
    //     std::cout << "Ingrese un numero positivo: ";
    //     std::cin >> numero;

    // }

    // std::cout << numero;


    // Asi se realiza un bucle que se ejecuta minimo una vez y este es el do while

    do{
        std::cout << "Ingrese un numero positvo: ";
        std::cin >> numero;

    } while (numero < 0);
    
    std::cout << numero;

    return 0;
}