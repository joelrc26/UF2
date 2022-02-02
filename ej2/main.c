/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 2
void main() {
	int hours, minutes, seconds;
	seconds = validate();
	hours = seconds / 3600;
	minutes = seconds % 60;
	seconds = seconds % 60;
	printf( "Equivalen a %d horas, %2d minutos y %d segundos\n", hours, minutes, seconds );
}
