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

void MostrarTablero(char* tablero) {
	//Recorremos las filas
	for (short i = 0; i < AMOUNT_FILAS; i++) {
		//Recorremos las columnas
		for (short j = 0; j < AMOUNT_COLUMNAS; j++) {
			//Mostramos el contenido en [i][j]
			std::cout << tablero[i * AMOUNT_COLUMNAS + j];
		}
		//Para que quede como un cuadrado, cada vez que acabe de recorrer las columnas debemos hacer un salto de linea
		std::cout << std::endl;
	}
}