#include <iostream>
#include <ctime> // Importo esto ya que estos numeros no son aleatorios son pseudoaleatorios y con esto podemos obtener la epoca unix
// la cual es el numero de segundos que pasaron desde el 1 de enero de 1970 lo cual esta en constante cambio ya que obtiene la fecha de tu pc
// y la convierte a esta medida 


// Numeros aleatorios:

int main(){

    srand(time(NULL)); //srand es para definir la semilla la cual si es una especifica seguira un mismo patron siempre
                       // por eso usamos time(NULL) que nos da un valor en constante cambio

    int z = rand(); // De esta manera generara numeros pseudoaleatorios en un rango de 0 a 32767

    int x = rand() % 20; //y aqui es como se genera numeros pseudoaleatorios en un rango especifico 
                         // se tiene que sacar modulo del maximo que queramos y sumar uno para incluirlo si no inicia en 0

    int y = (rand() % 20) + 1; // Aqui si se incluye el numero en el anterior no y inicia desde 1 no desde 0 como el anterior


    std::cout << x << "\n" << y << "\n" << z;
    return 0;
     
}