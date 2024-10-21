#include <iostream>
#include <ctime>

int main(){

    // Generator of random events:

    srand(time(NULL));
    int random = (rand()%6)+1;

    switch (random)
    {
    case 1:
        std::cout << "Ganaste un polla 300";break;
    case 2:
        std::cout << "Ganaste un cuca 300";break;
    case 3:
        std::cout << "Ganaste un consolador 300";break;
    case 4:
        std::cout << "Ganaste un taladro 300";break;
    case 5:
        std::cout << "Ganaste un negro polla 300";break;
    case 6:
        std::cout << "Ganaste un esclavo 300";break;                
    default:
        break;
    }
}

