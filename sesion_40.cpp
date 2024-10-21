#include <iostream>


void ordernarMenorMayor(int arreglo[], int tam);

int main(){
    //I need to make a function that organize from the lowest number to the highest ;)

    int arreglo[] = {10,1,2,9,7,4,6,3,5,8};
    int tam = sizeof(arreglo)/sizeof(int);

    // for(int i = 0; i < tam; i++){
    //     std::cout << arreglo[i] << " ";
    // }
    ordernarMenorMayor(arreglo, tam);

    for(int i = 0; i < tam; i++){
        std::cout << arreglo[i] << " ";
    }

    return 0;
}

void ordernarMenorMayor(int arreglo[], int tam){
    int temp = 0;
    for(int i = 0; i < tam - 1; i++){
        for(int j = 0; j < tam - 1; j++){
            if(arreglo[j] > arreglo[j+1]){
                temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }

    }
}