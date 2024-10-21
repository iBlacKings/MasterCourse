#include <iostream>
#include <limits>
#include <iomanip>

void mostrarSaldo(double saldo);
double depositar();
double retirar(double saldo);


int main(){

    double saldo = 0;
    int opc;

    do
    {
        std::cout << "Ingrese una opcion:\n\n";
        std::cout << "1. Mostrar saldo.\n";
        std::cout << "1. Depositar.\n";
        std::cout << "3. Retirar.\n";
        std::cout << "4. Salir.\n\n";
        std::cin >> opc;

        if(!(std::cin >> opc)){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "ENTRADA NO VALIDAD";
            continue;
        }

        switch (opc)
        {
        case 1:
            mostrarSaldo(saldo);break;
        case 2:
            saldo += depositar();
            mostrarSaldo(saldo);break;
        case 3:
            saldo -= retirar(saldo);
            mostrarSaldo(saldo);
            break;
        case 4:
            std::cout << "ADIOS!!";break;
        
        default:
            std::cout << "OPCION NO VALIDA"; break;
    }
    } while (opc != 4);
    


}



void mostrarSaldo(double saldo){
    std::cout << "Tu saldo es de: " << std::setprecision(2) << std::fixed <<  saldo << std::endl;
}


double depositar(){
    double monto;
    std::cout << "Ingrese el monto a depositar: ";
    std::cin >> monto;
    if(monto < 0){
        std::cout << "MONTO NO VALIDO" << std::endl;
        return 0;
    }
    else{
        return monto;
    }

}


double retirar(double saldo){
    double monto;
    std::cout << "Ingrese el monto a retirar: ";
    std::cin >> monto;

    if(monto < 0){
        std::cout << "MONRO NO VALIDO" << std::endl; 
        return 0;
    }
    else if (monto > saldo)
    {
        std::cout << "FONDOS INSUFICIENTES" << std::endl;
        return 0;
    }
    else{
        return monto;
    }
    

}