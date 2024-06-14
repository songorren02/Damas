#define AMOUNT_FILAS 8
#define AMOUNT_COLUMNAS 8
#include <iostream>

void InicializarTablero(char* tablero, char vacio) {
	//Rellenar el tablero
	for (short i = 0; i < AMOUNT_FILAS; i++) {
		for (short j = 0; j < AMOUNT_COLUMNAS; j++) {
			tablero[i * AMOUNT_COLUMNAS + j] = vacio;
		}
	}
}