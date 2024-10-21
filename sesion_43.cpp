#include <iostream>

int main(){
    std::string garaje3x3[][3] = {{"Nissan Skyline GT-R", "Toyota Supra MK4", "Mazda RX-7"},
                                  {"Honda NSX", "Subaru Impreza WRX STI", "Mitsubishi Lancer Evo"},
                                  {"Toyota AE86", "Nissan Silvia S15", "Mazda MX-5 Miata"}};

    int filas = sizeof(garaje3x3)/sizeof(garaje3x3[0]);
    int columnas = sizeof(garaje3x3[0])/sizeof(garaje3x3[0][0]);


    for(int i = 0; i < filas; i++ ){
        for (int j = 0; j < columnas; j++)
        {
           std::cout << garaje3x3[i][j] << ", ";
        }
        std::cout << '\n';
    }
}