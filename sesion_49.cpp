#include <iostream>

int main(){
    //Pointers

    //We have 2 differents forms to create pointers in arrays or others data type

    //others:

    std::string gender = "Masculine";
    std::string *pGender = &gender; //The conventional form is use a p first then use the name of the variable
                                    //also we need to put "*" to declare that is a pointer then we pass the memory direction with
                                    // ampersand operator "&"
    std::cout << pGender << std::endl; // with this we will print the memory direction
    std::cout << *pGender << std::endl; // with this we will print the value of the g variable

    int numero = 2;
    int *pNumero = &numero;
    std::cout << pNumero << std::endl;
    std::cout  << *pNumero << std::endl;

    //Arryas 

    int fechas[3] = {2,4,1};
    int *pFechas = fechas; // we don use the ampersand operator cuz passing the name of the arrays we already pass the memory direction
    std::cout << pFechas << std::endl;
    std::cout  << *pFechas << std::endl;


}