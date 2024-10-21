#include <iostream>

//enum esto es como crear una referencia para ciertas palabras ejemplos lunes = 1 osea lunes es 1 un entero
//pero no vamos a poner 1 si no lunes y pues esto sera como un tipo de dato por asi decirlo ya que hacemos referencia 
//por medio de un encabezado de dato de este modo podemos representar las cosas de otro modo 

//DEF BIEN FORMULADA:
// Un enum es un tipo de dato especial que permite definir un conjunto de valores constantes con nombres
// representativos. Cada valor del enum se asocia automáticamente a un número entero, comenzando por 0
// a menos que se especifique un valor diferente. Esto hace que el código sea más legible, ya que puedes
// utilizar nombres en lugar de números para representar estados o categorías. Por ejemplo, en este caso,
// los días de la semana se representan con los nombres "lunes", "martes", etc., en lugar de números como
// 0, 1, 2, lo que facilita la comprensión del código.


enum Dia{lunes, martes, miercoles, jueves, viernes, sabado, domingo};

int main(){

    Dia hoy = lunes;

    switch (hoy)
    {
    case 0:
        std::cout << "Hoy es lunes :d\n";
        break;
    
    default:
        break;
    }
    
}