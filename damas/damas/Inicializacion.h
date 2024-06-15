#include <iostream>

//Creamos la estructura de las piezas blancas y declaramos cada pieza
struct piezasBlancas {

	short x;
	short y;
	char tipo;
};

//Creamos la estructura de las piezas negras y declaramos cada pieza
struct piezasNegras {

	short x;
	short y;
	char tipo;
};

void InicializarTablero(char* tablero, char vacio);
void MostrarTablero(char* tablero);

