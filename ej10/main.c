/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 10
void main() {
	int num;
	num = validate();
	struct ej10 libro[num];
	insertarDatos(libro, num);
	mostrarDatos(libro, num);
}
