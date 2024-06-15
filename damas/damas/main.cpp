#define AMOUNT_FILAS 8
#define AMOUNT_COLUMNAS 8
#include <iostream>
#include <vector>
#include "Inicializacion.h"

void main() {
	char tablero[AMOUNT_FILAS][AMOUNT_COLUMNAS];
	char vacio = '~';
	std::vector<piezasBlancas> vPiezasBlancas;
	std::vector<piezasNegras> vPiezasNegras;

	//Inicializo tablero (vacio)
	InicializarTablero(&tablero[0][0], vacio);

	//Mostar el tablero
	MostrarTablero(&tablero[0][0]);
}

