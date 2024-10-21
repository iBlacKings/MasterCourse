#include <iostream>

int main() {

    // Variables

    int number; // To declare a variable we need to put the data type of the variable 
                // and the name of the variable


    number = 10; // To assign a value to a variable we need to put the name of the variable 
            // and the value that we want to assign to the variable

    // We can declare and assign a value to a variable in the same line

    int number2 = 20; 

    std::cout << number2 << std::endl;

    // we can operate with variables

    int result = number + number2;

    std::cout << result << std::endl;

    // Data types in C++

    // int: integer numbers

    int integer = 10;

    // float: decimal numbers

    float decimal = 10.52329; // float can store 7 decimal numbers

    std::cout << decimal << std::endl;

    // double: decimal numbers with more precision

    double decimal2 = 10.511999999; // double can store 15 decimal numbers

    std::cout << decimal2<< std::endl;

    // char: characters

    char character = 'a'; // We can only sotre 1 character among the ASCII table
                          // We need to put the character between single quotes

    // bool: boolean values

    bool boolean = true;
    bool boolean2 = false; // The boolean values return 1 or 0 depending on the value
                           // true = 1 and false = 0

    // string: text

    std::string text = "Hello World"; // We need to put the text between double quotes
    



    

    return 0;
}