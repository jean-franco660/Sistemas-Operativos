#include <iostream>
using namespace std;

// ======= punteros ======= //

main(void){
	
	// declaramos una variable normal denominada "x" de tipo entero
	
	int x;
	x=8;
	
	int *ptr;
	
	ptr=&x; //guardamos la dirección de ´x´ en el puntero
	
	// Mostrar el valor de x y la dirección de memoria almacenada en el puntero ptr
	
	cout<<"la valor de x es: " << x << endl; // mostramos el valor de 'x'
	cout<<"la direccion de x es:" << &x << endl; // mostramos la direccion de x, algo como 0x6ffe0c
	cout << "La dirección del puntero ptr es: " << &ptr << endl; //el puntero como tal tambien tiene su direccion de memoria como 0x6ffe00

}
