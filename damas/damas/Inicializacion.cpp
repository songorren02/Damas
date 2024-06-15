#define AMOUNT_FILAS 8
#define AMOUNT_COLUMNAS 8
#define AMOUNT_FICHAS 14
#define POSICION_BLANCA 0
#include <iostream>
#include <vector>
#include "Inicializacion.h"

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
			std::cout << tablero[i * AMOUNT_COLUMNAS + j] << " ";
		}
		std::cout << std::endl;
	}
}

void InicializarPiezas(char* tablero, std::vector<piezasBlancas>& vPiezasBlancas, std::vector<piezasNegras>& vPiezasNegras) {
	piezasBlancas tmpPiezasBlancas;
	piezasNegras tmpPiezasNegras;
	
	//Piezas blancas
	for (short i = 0; i < AMOUNT_FICHAS; i++) {
		for (short j = 0; j < AMOUNT_FILAS; j++) {
			for (short k = 0; k < AMOUNT_FILAS; k++) {
				if ((j * AMOUNT_COLUMNAS + k) <= 23) {
					//Piezas blancas
					if ((j * AMOUNT_COLUMNAS + k) % 2 == 0) {
						//Es par
						if ((j * AMOUNT_COLUMNAS + k) < 8 || (j * AMOUNT_COLUMNAS + k) > 15) {
							//Se salta la fila del medio
							vPiezasBlancas.push_back(tmpPiezasBlancas);

							vPiezasBlancas[i].x = j;
							vPiezasBlancas[i].y = k;
							vPiezasBlancas[i].tipo = 'w';

						}
					}
					else {
						//Es inpar
						if ((j * AMOUNT_COLUMNAS + k) > 8 && (j * AMOUNT_COLUMNAS + k) < 15) {
							vPiezasBlancas.push_back(tmpPiezasBlancas);

							vPiezasBlancas[i].x = j;
							vPiezasBlancas[i].y = k;
							vPiezasBlancas[i].tipo = 'w';
						}
					}
				}
				else if ((j * AMOUNT_COLUMNAS + k) > 39) {
					//Piezas negras
					if ((j * AMOUNT_COLUMNAS + k) % 2 != 0) {
						//Es inpar
						if ((j * AMOUNT_COLUMNAS + k) < 48 || (j * AMOUNT_COLUMNAS + k) > 55) {
							//Se salta la fila del medio
							vPiezasNegras.push_back(tmpPiezasNegras);

							vPiezasNegras[i].x = j;
							vPiezasNegras[i].y = k;
							vPiezasNegras[i].tipo = 'b';
						}
					}
					else {
						//Es par
						if ((j * AMOUNT_COLUMNAS + k) >= 48 && (j * AMOUNT_COLUMNAS + k) < 55) {
							vPiezasNegras.push_back(tmpPiezasNegras);

							vPiezasNegras[i].x = j;
							vPiezasNegras[i].y = k;
							vPiezasNegras[i].tipo = 'b';
						}
					}
				}
			}
		}
	}
}