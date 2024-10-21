#include <iostream>


double obtenerTotal(double precios[], int tamanoArray);
int main(){

    double precios[]={3.22, 5.12, 6.74, 9.99};
    int tamano = sizeof(precios) / sizeof(precios[0]);
    double total = obtenerTotal(precios, tamano);

    std::cout << "Total: "<< total;
}

double obtenerTotal(double precios[], int tamanoArray){
    double total = 0;
    for(int i = 0; i < tamanoArray; i++){
        total += precios[i];
    }
    return total;
}