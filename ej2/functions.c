/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 2
int validate(){
	int num;
	do {
		printf( "Escribe el número total de segundos: " );
		scanf( "%d", &num );
	}while(num < 0);
	return num;
}
