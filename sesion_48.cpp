#include <iostream>
#include <string>


int obtenerDigitoPar(const int numero);
int sumaPares(const  std::string tarjeta);
int sumaImpares(const std::string tarjeta);

int main(){
    std::string tarjeta;
    std::cout << "Ingrese su tarjeta de credito/debito: ";
    std::cin >> tarjeta;
    std::cout << tarjeta.size() << '\n';
    std::cout << tarjeta << "Invalida";
    int resultado  = (sumaImpares(tarjeta) + sumaPares(tarjeta));
    
    if((resultado%10) == 0){
        std::cout << tarjeta << "Valida";
    }
    else{
        std::cout << tarjeta << "Invalida";
    }
}

int obtenerDigitoPar(const int numero){
    return ((numero % 10)+(numero / 10 % 10));
}
int sumaPares(const  std::string tarjeta){
    int suma{};
    for(int i = tarjeta.size() - 2; i>= 0; i -= 2){
        int temp = (tarjeta[i] - '0') * 2;
        suma += obtenerDigitoPar(temp);
    }
    return suma;
}
int sumaImpares(const std::string tarjeta){
    int suma{};
    for(int i = tarjeta.size() - 1; i>= 0; i -= 2){
        int temp = (tarjeta[i] - '0');
        suma += temp;
    }
    return suma;
}


