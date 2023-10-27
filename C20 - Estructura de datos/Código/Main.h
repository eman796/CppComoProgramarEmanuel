/*Son las que contienen un apuntador a otro del mismo tipo de clase. En el caso del ejemplo:*/
class n{// n es el nombre del nodo
public:// coso publico,
    nod(int);// Constructor de la clase
    void set(int);//metodo para establecer el miembro de datos
    int get(int);// metodo para traer el miembro de datos.
    void next(nod *);// metodo para establecer ell apuntador al siguiente nodo
    n * get const;// obtiene el apuntador al siguiente nodo
    private://
    int data;// Datos almecenados en el nodo
    n * USa;//Nodo apuntador a la otra clase
};
/* El private tiene a data y el apuntador Usa. Este apunta a un n (Nodo) que se está declarando en la misma clase
    (Linea 2 con todo y comentario, 1 de c'digo sin comentarios).Es un enlace y puede unir otro tipo de tipo n, elcual tiene 5 funciones:
    1. Constructor que recibe 1 entero inicializador datos miembro
    2. Una funcion que establece los datos miembro,
    3. Otra funcion que obtiene los datos para devolver los datos,
    4. Funcion para establecer el valor del siguiente apuntador
    5. Funcion para obtener siguiente nodo

 /* Los objetos de estas clases se pueden enlazar entre sí para formar estructuras de datos útiles. Por lo general, un apuntador nulo indica el final de una estructura de datos
 Como el caracter nulo indica el final de una cadena*/
// Ver archivo "Figura 20.1 y su descripcion"en la carpeta "Apuntes"