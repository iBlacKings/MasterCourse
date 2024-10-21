#include <iostream>

using std::string;
// RECHARGED FUNCTIONS

// So this functios have the same signature of anothers this mean that have the same name, datatype, and can have the same parameters
// but 


// This two functions have the same name but diferent types and also amount of parameters and also diferent datatypes of parameters
int suma(int a, int b);
double suma(double a, double b, double c); 

// This two functions have the same name data type but diferent amount  
string pizza(string ingrediente1);
string pizza(string ingrediente1, string ingrediente2);


int main(){

    int a, b;
    double ad, bd, cd;

    a = 1;
    b = 2;
    ad = 3.0;
    bd = 4.0;
    cd = 6.4;

    std::cout << suma(a, b) << std::endl;; // This one will be the first function the int
    std::cout << suma(ad, bd, cd) << std::endl;; // This one will be the second function the double

    string ingrediente1, ingrediente2;

    ingrediente1 = "Pollo";
    ingrediente2 = "champiñones";

    std::cout << pizza(ingrediente1) << std::endl; // Here we going to use the first pizza cuz we only have 1 ingredient
    std::cout << pizza(ingrediente1, ingrediente2) << std::endl;; // Here we going to use the second cuz we have 2 ingredients


}

int suma(int a, int b){
    return a + b;
}

double suma(double a, double b, double c){
    return a + b + c;
}

string pizza(std::string ingrediente1){
    return "Mi pizza tiene " + ingrediente1;
}

string pizza(string ingrediente1, string ingrediente2){
    return "Mi pizza tiene " + ingrediente1 + " y " + ingrediente2;
}
