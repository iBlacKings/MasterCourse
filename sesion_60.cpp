#include <iostream>

//Constructures sobre cargados pd: ESTA UNA CHIMBA PARECEN FUNCIONES SOBRECARGADAS BUENO SON PEOR AJA EN CONSTRUCTORES


class Hamburguesa
{
private:
    std::string ingradiente1 = " ";
    std::string ingradiente2 = " ";
    std::string ingradiente3 = " ";

public:
    Hamburguesa(std::string ingrediente);
    Hamburguesa(std::string ingrediente, std::string ingrediente1);
    Hamburguesa(std::string ingrediente, std::string ingrediente1, std::string ingrediente2);
    void mostrarIngredientes();
    ~Hamburguesa();
    
};


Hamburguesa::Hamburguesa(std::string ingrediente)
{
    this->ingradiente1 = ingrediente;
    
}

Hamburguesa::Hamburguesa(std::string ingrediente, std::string ingrediente1)
{
    this->ingradiente1 = ingrediente;
    this->ingradiente2 = ingrediente1;
}

Hamburguesa::Hamburguesa(std::string ingrediente, std::string ingrediente1, std::string ingrediente2)
{
this->ingradiente1 = ingrediente;
this->ingradiente2 = ingrediente1;
    this->ingradiente3 = ingrediente2;
}

void Hamburguesa::mostrarIngredientes(){
    std::cout << ingradiente1 << '\n';
    std::cout << ingradiente2 << '\n';
    std::cout << ingradiente3 << '\n';
}

Hamburguesa::~Hamburguesa()
{
}

int main(){
    Hamburguesa hamburguesa1("Pepinillos", "Carne Angus", "3 quesos");
    Hamburguesa hamburguesa2("Chorizo", "Jalapenos");
    Hamburguesa hamburguesa3("Pan");

    hamburguesa1.mostrarIngredientes();
    std::cout << '\n';
    hamburguesa2.mostrarIngredientes();
    std::cout << '\n';
    hamburguesa3.mostrarIngredientes();

}