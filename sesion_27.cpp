#include <iostream>
#include <ctime>

int main(){
    int numero, adivinar, intentos;

    srand(time(NULL));
    adivinar = (rand() % 20) + 1;

    std::cout << "#########Adivina el numero#########\n";
                
    do
    {
        std::cout << "Ingresa el numero: ";
        std::cin >> numero;
        if(adivinar < numero){
            std::cout << "Mas bajo \n";
            intentos++;
        }
        else if (adivinar > numero){
            std::cout << "Mas alto\n";
            intentos++;
        }
        else{
            std::cout << "¡¡¡Lo lograste felicitaciones!!!\n";
            std::cout << "INTENTOS: "<< intentos;
        }        
    } while(numero != adivinar);
    

}