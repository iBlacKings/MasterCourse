#include <iostream>

int main(){
    std::string garaje[5];
    std::string temp;
    for(int i = 0; i < (sizeof(garaje)/sizeof(std::string)); i++){
        std::cout << "Coche numero #" << (i+1) << ": ";
        std::getline(std::cin >> std::ws, temp);
        if(temp == "s"){
            break;
        }
        else{
            garaje[i] = temp;
        }
    }

    std::cout << "\nMi garaje es: " << std::endl;

    for(int i = 0; !(garaje[i].empty()); i++){
        std::cout << "-" << garaje[i] << "\n";
    }

}
