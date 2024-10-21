//SIZEOF
#include <iostream>

int main(){
    
    //sizeof(); with this we can find the lenght in bytes

    double numero = 2.33315324126123;
    float numerof = 3.222;
    std::string nombre = "Camilo";
    int entero = 1;
    char nota = 'f';
    bool profesor = false;

    std::cout << sizeof(numero) << " Bytes\n"; // Every double number will have 8 bytes
    std::cout << sizeof(numerof) << " Bytes\n"; // Every number(not double) will have 8 bytes
    std::cout << sizeof(entero) << " Bytes\n"; //
    std::cout << sizeof(nombre) << " Bytes\n"; // every string dont matter the amount of letters have 32 bytes
    std::cout << sizeof(nota) << " Bytes\n"; // a char always will have only 1 byte and this is a reference 
    std::cout << sizeof(profesor) << " Bytes\n"; // a bool is equal to 0 or 1 so the value on bytes is 1 they are the base

    //sizeof on arrays

    char notasFinales[]={'a','b','c','d','e','f'};  

    std::cout << sizeof(notasFinales) << '\n'; // with this we get the size of the array that means to the size of sum
                                               // of all the elements that contains
    std::cout << sizeof(notasFinales[1]) << '\n'; // with this we get the size of the datatype of element in the array that
                                                  // also is equal to get the size of a datatype

    std::cout << sizeof(char) << '\n'; //here we get the size of a data type, here we dont need to create a variable of the dtp

    std::cout << sizeof(notasFinales)/sizeof(notasFinales[0]) << '\n';   // If we divide the completly size of the array by
                                                                         // by the data type or an element that it contains it
                                                                         // will return the lenght of the array

    
    return 0;

}