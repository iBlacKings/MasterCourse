#include <iostream>
#include <vector>

/*

"Typedef" is a keyword in C++ used to give data types a new name.
is like a nickname for a data type.

*/

//typedef std::vector<std::pair<std::string, int>> pair_list_t; // To add the nickname we need to consider add _t at the end of the name
                                                              // this is a convention

//typedef std::string str_t;

//typedef int entero_t;


// we also can do this with the using keyword

using pair_list_t = std::vector<std::pair<std::string, int>>;
using str_t = std::string;
using entero_t = int;

int main(){

//    pair_list_t pair_list;  // We can use the nickname to create variables of the type that we want

    str_t name = "Camilo";
    std::cout<< name << std::endl;

    entero_t x = 5;
    std::cout<< x << std::endl;

    return 0;

}