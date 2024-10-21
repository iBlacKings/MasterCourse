#include <iostream>



// namespaces with this we can create variables with the same name in different namespaces
// and we can use them in the same file without any problem but we need to specify the namespace that we want to use
// with the scope resolution operator (::) like this: namespace::variable


// This is the first namespace
namespace primero{
    int x = 5;
}

// This is the second namespace
namespace segundo{
    int x = 10;
}

int main(){

    // This is a local variable with the same name as the variables in the namespaces
    int x = 0;
    std::cout<< x << std::endl;

    // We can use the variables in the namespaces with the scope resolution operator (::)
    std::cout<< primero::x << std::endl;

    // ALSO THIS IS THE MOST IMPORTANT PART OF THE NAMESPACES
    // ""WE CAN USE using namespaces with libraries""

    using namespace std;

    cout<< "Hello World" << endl;

    //With this we can use all the functions and variables in the iostream library without the scope resolution operator (::)
    // but we need to be careful with the names of the variables and functions that we create in our code

    //FOR THAT IS BETTER TO ALWAYS USE THE SCOPE RESOLUTION OPERATOR (::) TO AVOID PROBLEMS

    return 0;

}