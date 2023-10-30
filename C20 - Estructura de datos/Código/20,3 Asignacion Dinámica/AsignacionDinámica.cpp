//
// Created by emanu on 29/10/2023.
//
class Nodo
{
public:
    Nodo( int ); // constructor
    void establecerDatos( int ); // establece el miembro de datos
    int obtenerDatos() const; // obtiene el miembro de datos
    void establecerSiguientePtr( Nodo * ); // establece el apuntador al siguiente Nodo
    Nodo *obtenerSiguientePtr() const; // obtiene apuntador al siguiente Nodo
private:
    int datos; // datos almacenados en este Nodo
    Nodo *siguientePtr; // apuntador a otro objeto del mismo tipo
}; // fin de la clase Nodo
