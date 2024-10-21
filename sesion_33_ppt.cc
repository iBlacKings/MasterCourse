#include <iostream>
#include <ctime>

char eleccionJugador();
char eleccionComputadora();
void mostrarEleccion(char eleccion);
void ganador(char jugador, char computadora);

int main(){
    char jugador, computadora;

    jugador = eleccionJugador();
    std::cout << "\n\n";
    std::cout << "Jugador:";
    mostrarEleccion(jugador); 

    computadora = eleccionComputadora();
    std::cout << "Computadora:";
    mostrarEleccion(computadora);
    
    ganador(jugador, computadora);


    return 0;
}

char eleccionJugador(){

    char eleccion;

    do
    {
        std::cout << "******************************\n";
        std::cout << "ROCA-PAPEL-TIJERA | JUGADOR\n";
        std::cout << "******************************\n";
        std::cout << "'r' para roca.\n'p' para papel.\n't' para tijera.\n ";
        std::cout << "Ingrese su eleccion: ";
        std::cin >> eleccion;
    } while (eleccion != 'r' && eleccion != 'p' && eleccion != 't');
    return eleccion;
}

char eleccionComputadora(){
    srand(time(0));
    int rango = rand() % 3 + 1; 
    switch (rango)
    {
    case 1:return 'r';
    case 2:return 'p';
    case 3:return 't';
    }
    return 0;
}

void mostrarEleccion(char eleccion){
    switch (eleccion)
    {
    case 'r':std::cout << " Roca\n";break;
    case 't':std::cout << " Tijeras\n";break;
    case 'p':std::cout << " Papel\n";break;
    }

}
void ganador(char jugador, char computadora){
    switch (jugador)
    {
    case 'r':
        if (computadora == 'r'){
            std::cout << "EMPATE!\n";
        }
        else if (computadora == 't')
        {
            std::cout << "GANASTE!!\n";
        }
        else{
            std::cout << "PERDISte\n";
        }
        break;
    case 't':
        if (computadora == 't'){
            std::cout << "EMPATE!\n";
        }
        else if (computadora == 'p')
        {
            std::cout << "GANASTE!!\n";
        }
        else{
            std::cout << "PERDISte\n";
        }
        break;
    case 'p':
        if (computadora == 'p'){
            std::cout << "EMPATE!\n";
        }
        else if (computadora == 'r')
        {
            std::cout << "GANASTE!!\n";
        }
        else{
            std::cout << "PERDISte\n";
        }
        break;
    
    default:
        break;
    }
}