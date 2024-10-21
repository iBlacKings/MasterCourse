#include <iostream>

int main(){

    //Important methods of the strings on c++

    std::string nombre;
    char pos;
    nombre = "Camilo";

    std::cout << nombre.length(); //with length we can know the longitud of the text

    std::cout << nombre.empty(); //We can know if the string is clear or not 1 = true 0 = false

    nombre.clear(); //with this we can clear the string
    std::cout << nombre;

    nombre.append("Camilo"); // add a string to the end if there is something else if not it add a new part
    std::cout << nombre;

    nombre.append("@gmail.com"); // here Im adding a dominan to create a email this is the most common utilities

    pos = nombre.at(2); //We choose the posicion that we want and it going to pass the character 
    std::cout << pos;

    nombre.insert(2, "pepe"); // here we dicede were we start and the string or char that we want
    std::cout << nombre;

    std::string nombre2 = "Juan Camilo";

    std::cout << nombre2.find("Camilo"); // it will search the word and return where it starts on what posicion and if there more 
                                         // words same that we the one that we are searching it would return the fisrt
    
    std::cout << nombre2.erase(5,6); // with this we can eleminited a part from the string also if we put -1 will going to the end we dont need to put the amount 
    


}