#include <iostream>

//THISSSS SHIT ITS SOOOO AMAZING BROOO mira a ver tu putito esta mierda te arregla la vida de muchas formas la vdd 

//mira con el template tu creas typos de datos por asi decirlo que pueden cambiar y tomar el dato que se le esta enviando
//importante es que si creas 1 y vas a usar varias variables que no sabes que son van a ser todas del primer tipo de dato que entre
//por ende es mejor crear varias variables que pueden tomar diferentes datos si todos los datos pueden variar como se hizo

//para crear el template fuera del main llamamos a template abrimos "<>" y alli adentro escribimos typename "NOMBRE CUALQUIER" 
//para el representar que se usara un tipo de dato este podra cambiar 

template <typename T, typename U>

auto max(T pene, U vagina){
    return (pene > vagina ? pene : vagina );
}

template <typename T, typename U>

auto min(T pedro, U juanito);

int main(){
    auto mivariable = max(3.5, 2);

    std::cout << mivariable;
}

template <typename T, typename U>

auto min(T pedro, U juanito){
    return (pedro < juanito ? pedro : juanito );
}
