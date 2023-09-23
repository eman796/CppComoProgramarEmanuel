//Asi se hace un comentario.
/*Este es un comentario de varias líneas*/
//La verdad, la sintaxis de C++ me parece bastante rara, comparada con Java, JavaScript y Python
#include <iostream>// Esto permite que el programa imprima cosas por consola.
//El "#" es una directiva del preprocesador de C++, y la linea indica al preprocesador que incluya en el programa
//, que en este caso le indica que incluya el archivo de encabezado de flujos de entrada/salida (<iostream>), el cual se debe usar
// para la entrada y salida de datos (I de input y O de output)
int main(){// Los paréntesis y el "{"indican que estamos declarando una función
    std::cout <<"Mi primer Hello World en este lenguaje (Ni sé lo que hago)\n";
    int coso = 15;
    if(coso==15){
        std::cout <<"Probando un if desde este lenguaje";
    }
    return coso;
}