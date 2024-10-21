#include <iostream>

int main(){
    // Bucle for, este es un bucle el cual definimos que se realice un numero especifico de veces

    for(int i = 1; i <= 10; i++){ // en el for se define el indicie el cual sera como un contador que lo inicializamos donde queremos
        std::cout << i <<std::endl;// que inicie digamos que quiero un bucle de 3 veces pero solo quiero ejecutar 2 entonces seria 
                                 // poner el contador en 1 y el numero maximo 4 y despues de este tenemos en cuanto el contador incrementara
                                 // podemos incrementar de 1 en 1 con indice ++ si queremos en otras cantidades hacemos i+="cantidad
    }
    std::cout << "Hola\n";

    return 0;
}