#include <iostream>

// cout << (insertion operator, "with this we can show in the console")
// cin >> (extraction operator, "with this we can get the information from the user")

int main (){

    std::string nombre;
    int edad;

    std::cout << "What is your age\n";
    std::cin >> edad;


    std::cout << "What's your name?\n";
    std::getline(std::cin, nombre); //To get an input with spaces we need to use getline() from the standar library
                                              // also if we don't put >>std::ws the program is going to fill with void values cuz
                                              // it takes the blank spaces

    std::cout << "Hi " <<nombre << "\n";
    std::cout << "Your age is " << edad << " years";

    return 0;
}