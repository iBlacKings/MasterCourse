#include <iostream>

int main(){

    std::string estudiantes[] ={"Carlitos", "Manu", "Gabriel", "Nicolas"};

    for(int i = 0; i < (sizeof(estudiantes)/sizeof(std::string)); i++){
        std::cout << estudiantes[i] << '\n';
        } 
}