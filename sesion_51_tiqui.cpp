#include <iostream>
#include <ctime>


void crearTablero(char *tablero);
void jugadorMovimiento(char *tablero,char simbolo);
void computerMovimiento(char *tablero,char computer);
bool ganador(char *tablero, char simbolo);
bool empate(char *tablero);


int main(){

    char tablero[] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char simbolo = 'X';
    char computador = 'O';


    while (true)
    {
        crearTablero(tablero);

        jugadorMovimiento(tablero, simbolo);
        if(ganador(tablero, simbolo)){
            std::cout <<  "GANASTE!!" << '\n';
            crearTablero(tablero);
            break;
        }else if(empate(tablero)){
            std::cout << "EMPATE!!!" << '\n';
            break;
        }

        computerMovimiento(tablero, computador);
        if(ganador(tablero, computador)){
            std::cout <<  "PERDISTE!!" << '\n';
            crearTablero(tablero);
            break;
        }else if(empate(tablero)){
            std::cout << "EMPATE!!!" << '\n';
            break;
        }
    }
    


}

void crearTablero(char *tablero){
    std::cout << "    " << "|" << "     " << "|" << "     " << '\n';
    std::cout << " " << tablero[0] << "  " << "|" << "  " << tablero[1] << "  " << "|" << "  " << tablero[2] << "  " << '\n';
    std::cout << "____" << "|" << "_____" << "|" << "_____" << '\n';
    std::cout << "    " << "|" << "     " << "|" << "     " << '\n';
    std::cout << " " << tablero[3] << "  " << "|" << "  " << tablero[4] << "  " << "|" << "  " << tablero[5] << "  " << '\n';
    std::cout << "____" << "|" << "_____" << "|" << "_____" << '\n';
    std::cout << "    " << "|" << "     " << "|" << "     " << '\n';
    std::cout << " " << tablero[6] << "  " << "|" << "  " << tablero[7] << "  " << "|" << "  " << tablero[8] << "  " << '\n';
    std::cout << "    " << "|" << "     " << "|" << "     " << '\n';
    
}
void jugadorMovimiento(char *tablero, char simbolo){
    int numero{};
    do
    {
        std::cout << "Introduzca un numero del 1 - 9: ";
        std::cin >> numero;
        numero --;
        if(!(numero < 0 && numero > 8) && tablero[numero] == ' '){
            tablero[numero] = simbolo;
            break;
        }else{
            std::cout << "Posicion incorretca" << '\n';
        }

    } while(true);   
}
void computerMovimiento(char *tablero, char computer){
    srand(time(0));
    int posicion {};
    while (true)
    {
       posicion = rand() % 9;
        if(tablero[posicion] == ' '){
            tablero[posicion] = computer;
            break;
        }
    }
}
bool ganador(char *tablero, char simbolo){
    // Comprobar filas
    if (tablero[0] == simbolo && tablero[1] == simbolo && tablero[2] == simbolo) return true;
    if (tablero[3] == simbolo && tablero[4] == simbolo && tablero[5] == simbolo) return true;
    if (tablero[6] == simbolo && tablero[7] == simbolo && tablero[8] == simbolo) return true;

    // Comprobar columnas
    if (tablero[0] == simbolo && tablero[3] == simbolo && tablero[6] == simbolo) return true;
    if (tablero[1] == simbolo && tablero[4] == simbolo && tablero[7] == simbolo) return true;
    if (tablero[2] == simbolo && tablero[5] == simbolo && tablero[8] == simbolo) return true;

    // Comprobar diagonales
    if (tablero[0] == simbolo && tablero[4] == simbolo && tablero[8] == simbolo) return true;
    if (tablero[2] == simbolo && tablero[4] == simbolo && tablero[6] == simbolo) return true;

    // No hay ganador
    return false; 

}
bool empate(char *tablero){
    for(int i = 0; i < 9; i++){
        if(tablero[i] == ' '){
            return false;
        }
    }
    return true;
}