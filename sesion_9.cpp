#include <iostream>
#include <cmath>

int main(){

    double y = 3;
    double x = 5;
    double z, w, t, h, k, o, p , q;
    
    //Usefull functions on c++

    // Max with this we can find the highest number of the numbers that we pass through 

    z = std::max(y,x);

    std::cout << z;

    // Min with this we can find the lowest number between the numbers that we send 

    w = std::min(y,x);   

    //Cmath library come with others functions like:

    //1. POW with this we elevete a number to anyone that we want

    t = std::pow(3,4); // the first number will be the base and the other the exponent 

    //2.SQRT get the square root of anynumber

    h = std::sqrt(25);

    //3.ABS get the absolute value of a number (the positive of any number)

    k = std::abs(-10);

    //4.ROUND 

    float decimal = 3.142;

    o = std::round(decimal);

    //5.Ceil (get the number to the int more close that is highger for example 7,1  = 8 and 7,9 = 8)

    float decimal2 = 3.2;
    p = std::ceil(decimal2);   

    //6.Floor (get the number to the int more close that is lower for example 7,1  = 7 and 7,9 = 7)

    float decimal3 = 3.9;
    q = std::floor(decimal3);
}