#include <iostream>

//IF STAMENT 

int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age > 60){
        std::cout << "You are too old bruh get out here";
    }
    else if (age == 0){
        std::cout << "You're'not even born lol";
    }
    else if(age >= 18) {
        std::cout << "Welcome custumer";
    }
    else {
        std::cout << "You don't have the minimun age";
    }

    return 0;
}