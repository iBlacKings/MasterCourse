#include <iostream>


int factorialIteravito(int numero);
int factorialRecursivo(int numero);

int main(){

    //Factorial iterativo y recursivo
    int numeroff = factorialIteravito(5);
    std::cout << numeroff;
    int numeroxd = factorialRecursivo(5);
    std::cout << numeroxd;
}

int factorialIteravito(int numero){
    
    int resultadoFinal = numero;
    
    for (int i = numero-1; i > 0; --i) //LOOK BITCH THIS IS IMPORTANT hermanito mira tu pensaste que era obligatorio ir de adelante
                                       // hacia atras pero tmb pudiste ir de atras hacia delante iniciando en 1 y finalizando en el numero
                                       // con un i >= numero pendejo que sos aqui la cagaste vv y trabajaste de mas 
    {

        resultadoFinal = resultadoFinal * i;

    }
    return resultadoFinal;
    

}
int factorialRecursivo(int numero){

    if(numero == 0){
        return 1;
    }
    else{
        return numero*factorialRecursivo(numero-1);
    }
}
