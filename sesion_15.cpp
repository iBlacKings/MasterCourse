#include <iostream>

int main(){
    /*
    Operadores logicos 

    && : comprueba si dos condiciones son verdaderas. (Conjunción)
    || : comprueba si al menos una de las 2 condiciones es verdadera. (Disyunción)
    ! : invierte el estado logico de su operador. (Negación)
    */

   int temp;
   std::cout << "Ingrese la temperatura: ";
   std::cin >> temp;

   if (temp > 10 && temp < 20){
        std::cout << "Quer rico clima";
   }
   else if(!(temp < 100)){
        std::cout << "Moriremos";
   } 
   else if(temp > 30 || temp < 0){
        std::cout << "No rico";
   }
   
}
