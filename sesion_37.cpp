//FOR EACH

#include <iostream>

int main(){

    std::string biblia[]={"David", "Kain", "Lucifer", "Jesus"};
    //For each loop in this loop we go from the begining to the end in one by one only we can't change that
    //in this we dont have an iterator that be a number we have a interator that takes the value of the element of the array
    for(std::string nombre:biblia){ //the compose of this is the data type of the element of the array, an iterator that
                                    // takes the value of the element and ":" then the name of the array
        std::cout << nombre << '\n';
    }

    int notas[]={1,2,3,4,5};
    for(int nota: notas){
        std::cout << nota << '\n';
    }

    // we can do this with any array of any datatype

}