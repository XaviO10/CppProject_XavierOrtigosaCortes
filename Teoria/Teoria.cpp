/*************************************************************************************************************************
//***CLASES**/ /
/*************************************************************************************************************************

DATOS + FUNCIONES dentro de una 'CAJA'

___Clase 1 definde comportamiento, funcionalidad (como un Struct)

Las clases tienen ".h" y ".cpp"
".h"--> enunciado, encapsulamiento
".cpp"--> cuerpo

Las clases no tiene main, las llamo desde mi main. MODULARIDAD/ORGANIZACION.
Cerca del mundo real */

/*************class .h*************/
class Circle
{
private://visibilidad //no se puede ver ni modificar
	float coorX;
	float coorY;
	float radio;

public://puedo ver llamar desde fuera de la clase
	Circle(float a, float b, float r);//constructor de la clase, se llama igual, podemos tener 0 o varios, si tenemos varios esta sobrecargado, inicializar atributos
	~Circle();//destructor de la clase, se llama automaticamente a partir de ciertas cosas, liberacion de memoria que crea la clase
	float GetRadio();  //firma de la funcion, devuelve float
	float Area();	   //firma de la funcion, devuelve float		
};

/*************class .cpp*************/

#include "circle.cpp"

Circle::(float a, float b, float r) : coorx{ a }, coorY{ b }, radio{ r }
{
}

Punteros----------------------------------------------------------

int x{ 10 };		std::cout << x;					10
std::cout << &x;				Direccion de memoria
std::cout << *&x;				10



int* p	X
int *p
int *p{ nullptr }  V

Globales y estaticas viven todo el programa

int a[s]   int *a		a = new int(lenght)


int *p					delete p && p = nullptr
p = new int{ 10 }

int *a					delete[] a
a = new int{ lenght }		a = nullptr

