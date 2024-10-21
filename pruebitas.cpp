#include <iostream>

void eliminarElemento(int arr[], int &tamano, int posicion) {
    // Verifica que la posición es válida
    if (posicion < 0 || posicion >= tamano) {
        std::cout << "Posición inválida." << std::endl;
        return;
    }

    // Desplaza los elementos hacia la izquierda desde la posición de eliminación
    for (int i = posicion; i < tamano - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce el tamaño del array
    tamano--;
}

int main() {
    const int MAX_SIZE = 10;
    int numeros[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamano = 10;  // Tamaño actual del array

    int posicionEliminar;
    std::cout << "Introduce la posición del elemento a eliminar (0-9): ";
    std::cin >> posicionEliminar;

    eliminarElemento(numeros, tamano, posicionEliminar);

    // Imprime el array después de eliminar el elemento
    std::cout << "Array después de eliminar el elemento:" << std::endl;
    for (int i = 0; i < tamano; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
