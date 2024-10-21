//Fill function ;) this function is more commun use in arrays where u can fill 
#include <iostream>

int main(){
    const int tam = 99;
    std::string coches[tam];
    // fill(coches, coches+tam, "GTR"); //With this we can fill all the array but also we can do it for parts like in the
                                        //Following ex:
    // fill(coches, coches+(tam/2),"SUBARU");
    // fill(coches + (tam/2), coches + tam, "Nissan");

    //Also in more little parts like:

    fill(coches, coches + tam/3, "Toyota" );
    fill(coches + (tam/3), coches + (tam/3 * 2), "FIAT");
    fill(coches + (tam/3 * 2),coches + tam,"KAWASAKI");
    

    for(std::string coche: coches){
        std::cout << coche << std::endl;
    }

}