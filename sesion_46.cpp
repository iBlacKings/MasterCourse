#include <iostream>

void passForValue(std::string vaso1,std::string vaso2);
void passForMemoryDirecction(std::string &vaso1,std::string &vaso2);

int main(){
    //Pass variables for value and memory direcction

    std::string vaso1 = "Creatina";
    std::string vaso2 = "Monster";

    

    std::cout << "Original " << &vaso1 << std::endl; 
    std::cout << "Original " << &vaso2 << std::endl; 

    //Value:
    passForValue(vaso1, vaso2);
    std::cout << "Value "<<vaso1 << '\n';
    std::cout << "Value "<< vaso2 << '\n';

    //Memory:
    passForMemoryDirecction(vaso1, vaso2); //This is the best way that we find plz try to do this all the time cuz the other cosum and create
                                        //more spaces in memory ;)

    std::cout << "Memory "<<vaso1 << '\n';
    std::cout << "Memory "<< vaso2 << '\n';

}

void passForValue(std::string vaso1,std::string vaso2){
    
    std::cout << "Copia " << &vaso1 << std::endl;
    std::cout << "Copia " << &vaso2 << std::endl;
    
    std::string temp = vaso1;
    vaso1 = vaso2;
    vaso2 = temp; 
}

void passForMemoryDirecction(std::string &vaso1,std::string &vaso2){
    std::string temp = vaso1;
    vaso1 = vaso2;
    vaso2 = temp; 
}