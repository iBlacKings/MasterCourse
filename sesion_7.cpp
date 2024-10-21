#include <iostream>

int main(){
    
//convertion of data types there are 2 ways
    double x = (int)3.14;  // Put the type that we want is the fisrt way
    x += 1.5; // add a value 

    std::cout<< x << std::endl;

    // example of the real life:

    //  I have a web which i  a test and i have the correct answers and the total to know the %
    // of that persons 

    int correct_answers = 10;
    int total_questions = 20;

    double percentage = (double)correct_answers / (double)total_questions * 100;

    std::cout << percentage << "%";

    return 0;
}