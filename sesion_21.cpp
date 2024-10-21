#include <iostream>

int main(){

    std::cout << "continue \n";
    // Continue and break this always we use it on loops

    //Continue with this we can skip a iteration in the part that we put it, the rest of the code don't be executed so it going
    // to restart again but no in the iteration that we was, it going to start on a new iteration the next iteration, to be exactly

    for (int i = 1; i <= 10; i++){
        if(i == 5){
            continue;               //with this we print the numbers from 1 to 10 but we dont show the 5 cuz we continue
        }

        std::cout << "\n" << i << std::endl;    

    }


    std::cout << "Break \n";

    // Break with this we can end the loop and the iterations that left won't be executed

    for (int i = 1; i <= 10; i++){
        if(i == 5){
            break;               //with this we print the numbers from 1 to 5 because we say that the loop need to end when we 
        }                       // get the 5 and the rest of iterations don't be executed

        std::cout << i << std::endl;    

    }

    return 0;
}