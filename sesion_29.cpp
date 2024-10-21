#include <iostream>

// HOW WE CAN RETURN A VALUE IN A FUNCTION:

// So it's important that here we dont declare de function like a void that doesn't return anything cuz we will do it
// so if we want to return a double we need to put at the begining example:

double areaCuadrado(double longitud); // We only need to put the data type that will return and the rest is the same
double VolumenCubo(double longitud); // in that function on the built we dont create a variable that save the result that we are going to
                                     // return, look.
int main(){
    double longitud = 3;
    double area = areaCuadrado(longitud); // When we had a function that return a value we need to create a variable of the same data type 
                                          // of the return to save it 



}

double areaCuadrado(double longitud){
    double area = longitud * 2.0;
    return area;
}

double VolumenCubo(double longitud){
    return longitud * 3.0;   // ALSO WE DON'T NEED TO SAVE OR CREATE A VARIABLE TO SAVE THE VALUES THAT WE WANT TO RETURN    
}                            // WE CAN DO IT IN THE SAME RETURN LIKE IN THAT FUNCTION D:
