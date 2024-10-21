#include <iostream>
#include <cmath>
void computerMovimiento(char *tablero,char computer);
bool ganador(char *tablero);
bool empate(char *tablero);

int main(){
    using std:: cout;
    
    char op;
    double num_1, num_2, result;

    std::cout << "########## CALCULATOR ##########\n";

    std::cout << "Insert the following operators (+ , - , / , *): ";
    std::cin >> op;

    std::cout << "Insert the first number: ";
    std::cin >> num_1;

    std::cout << "Insert the second number: ";
    std::cin >> num_2;    

    switch(op){
        case '+':
            result = num_1 + num_2;
            std::cout << "Adition result: " << result;break;
        case '-':
            result = num_1 - num_2;
            std::cout << "Substraction result: " << result;break;
        case '/':
            if (num_2 == 0){
                std::cout << "Someone its beening so funny wtf bru u want that i make boom or what";
            }
            else{
                result = num_1 / num_2;
                std::cout << "Division result: " << result;break;
            }
        case '*':
            result = num_1 * num_2;
            std::cout << "Multiplication result: " << result;break;
        default:
            std::cout << "Please enter a valid operation";        
    }
    return 0;
}