#include <iostream>
#include <vector>

int main(){
    //Dinamic memory is when the program its already running for this we use the reserverd word 
    // "new"

    //ex:

    int *pNume = nullptr; //Here we are declaring a pointer to an integer variable its important to use nullptr 
                          //to initialize the pointer dont use NULL or 0 cuz it can cause problems

    pNume = new int(5); //Here we reserve memory for an integer variable and we assign the address of the memory to the pointer

    std::cout << *pNume << std::endl;

    *pNume = 5;

    //Here we are reserving memory for an integer variable

    //After we finish using the memory we have to free it

    delete pNume; //Here we are freeing the memory, so we will not have memory leaks

    //If we want to reserve memory for an array we can do it like this:

    int *pArray = nullptr;

    pArray = new int[5]; //Here we are reserving memory for an array of 5 integers

    //Big example:

    std::string *pCoches = nullptr;

    pCoches = new std::string [5];

    pCoches[0] = "Ferrari";
    pCoches[1] = "Lamborghini";
    pCoches[2] = "Bugatti";
    pCoches[3] = "Porsche";
    pCoches[4] = "Aston Martin";

    for (int i = 0; i < 5; i++)
    {
        std::cout << pCoches[i] << std::endl;
    }
    
    delete[] pArray;
    delete[] pCoches;



    std::vector<int> *pNotas = nullptr;

    pNotas = new std::vector<int>;

    //std::vector<int> *pNotas = new std::vector <int>

    pNotas->push_back(2);

    std::cout << pNotas->at(0);

    delete pNotas;


 












}