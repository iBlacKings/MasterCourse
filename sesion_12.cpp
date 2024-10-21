#include <iostream>

int main(){
    // int month;
    // std::cout << "Insert a month (1-12): ";
    // std::cin >> month;

    // switch (month)
    // {
    // case 1:
    //     std::cout << "January";break;
    // case 2:
    //     std::cout << "Febraruy";break;
    // case 3:
    //     std::cout << "March";break;
    // case 4:
    //     std::cout << "April";break;
    // case 5:
    //     std::cout << "May";break;
    // case 6:
    //     std::cout << "August";break;
    // case 7:
    //     std::cout << "June";break;
    // case 8:
    //     std::cout << "July";break;
    // case 9:
    //     std::cout << "September";break;
    // case 10:
    //     std::cout << "October";break;
    // case 11:
    //     std::cout << "November";break;
    // case 12:
    //     std::cout << "December";break; 
    // default:
    //     std::cout << "Write a valid month";
    // }


    char calificacion;
    
    std::cout << "Insert your grade: ";
    std::cin >> calificacion;

    switch(calificacion){
        case 'a': 
            std::cout << "Nice"; break;
        case 'b': 
            std::cout << "Good"; break;
        case 'c': 
            std::cout << "OK"; break;
        case 'd': 
            std::cout << "¡¡GET OF THAT SHIT FROM ME!!"; break;
        case 'f': 
            std::cout << "YOOOOO plz don't come again"; break;
        default:
            std::cout << "Please enter only letters from a-f";   
    }

    
    return 0;

}