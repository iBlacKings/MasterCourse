#include <iostream>

int main(){
    std::string preguntas[] = {"¿Qué evento cambia la dinámica entre Hiro y Zero Two en el episodio 6?",
                               "¿Por qué decide Hiro convertirse en piloto de Franxx?",
                               "¿Cómo afecta la transformación de Zero Two en el clímax?",
                               "¿Qué impacto tiene el evento final en la relación de Hiro y Zero Two?"
    };

    std::string respuestas[][4] = {
    {"A) Su primera batalla juntos.","B) La aparición del dragón Klaxosaurio.","C) La revelación de la identidad de Zero Two.","D) La partida de Hiro del escuadrón."},    
    {"A) La pérdida de un amigo.","B) Un sueño sobre Zero Two.","C) El rescate por Zero Two.","D) La promesa de un futuro mejor."},
    {"A) Aumenta su poder pero pone en riesgo su cuerpo.","B) Crea un nuevo tipo de Franxx.","C) Desintegra el equipo de pilotos.","D) Revela la verdad sobre los Klaxosaurios."},
    {"A) La confrontación final con los Klaxosaurios.","B) El sacrificio de un personaje secundario.","C) La resolución de la batalla por la humanidad.","D) La revelación de recuerdos pasados."}
                                   };

    char opcionCorrecta [] ={ 'A','C','A', 'D' };
    char respuesta;
    int puntos{};

    for (int i = 0; i < sizeof(preguntas)/sizeof(preguntas[0]); i++)
    {       
            std::cout << "*****************************" << '\n';
            std::cout << preguntas[i] << '\n';
            std::cout << "*****************************" << '\n';
        for (int j = 0; j < (sizeof(respuestas[0])/sizeof(respuestas[i][0])); j++)
        {
            std::cout << respuestas[i][j] << '\n';
        }

        std::cin >> respuesta;
        respuesta = toupper(respuesta);
        if (respuesta == opcionCorrecta[i])
        {
            std::cout << "CORRECTO!! :D \n";
            puntos ++;
        }
        else
        {
            std::cout << "INCORRECT :(\n";
            std::cout << "RESPUESTA CORRECTA ES: " << opcionCorrecta[i] << '\n';
        }
    }

    std::cout << "Tu puntuacion fue de: " << puntos << '/' << "4";
    

}