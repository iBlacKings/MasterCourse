//ARRAYS
#include <iostream>

int main(){
    //An arrays is a data type where we can save other elements from a different data type or also an arrays
    //but is necessary that all the elements that we going to save are the same data type example

    std::string automoviles[]={"Mini Copper","FIAT","SUBARU","NISSAN"}; //This array is an arrays of strings so we can't
                                                                        // add elements from diff data type and also when
                                                                        // the arrays is define u can't increase the lenght
    std::cout << automoviles[0] << '\n';    //Remember that everything in programming starts from 0 :D
    std::cout << automoviles[1] << '\n';    // to show an elemento of an array u need to put the name of 
    std::cout << automoviles[2] << '\n';    // the array and then into keys [] the posicion of it.
                                                            
    automoviles[1] = "Lamborgini"; // To change a element its important that is of the type of the array
                                   // also to do it u need to put the name of the array and the posicion of 
                                   // the element that u will update but also u can't delete elements like in other lenguages

    int numeros[10] = {}; // U don't need to declare all the values of a array u only need to declare the lenght
                     // and then u can add it is the same when u change a value:

    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;

    size_t tamaño = sizeof(numeros)/sizeof(numeros[0]); //This is how we can get the lenght of a array 
                                                        // we do it like dis cuz we can only get the lenght of the memory
                                                        // of the complete array and also the lenght of the memory of each element
                                                        // so we get the complete lenght of the array and divided for 1 element cuz
                                                        //all the elements had the same lenght 

    size_t tamaño_vehiculos = sizeof(automoviles) / sizeof(automoviles[0]);
    std::cout << tamaño_vehiculos << '\n';



    for(int i = 0; i < tamaño; i++ ){
        std::cout << numeros[i] << '\n';
    }
}