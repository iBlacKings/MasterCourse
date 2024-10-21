#include <iostream>


int main(){
    //Null Pointers = "nullptr"
    //We most commonly use it when we know that we will goig to have a pointer but we doesn't define it
    //also with this we can know if the pointers was correctly define

    int *pPuntero = nullptr;
    int x = 20;
    //pPuntero = &x;
    if(pPuntero == nullptr){
        std::cout << "The pointers wasn't define" << "'\n";
        std::cout << pPuntero; 
    }
    else{
        std::cout << "The pointers was correctly define" << "'\n";
        std::cout << pPuntero; 
    }
}