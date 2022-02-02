/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 4
int validate() {
	int num;
	do {
		printf("Nota: ");
		scanf("\n%d", &num);
	}while(num < 0 || num > 10);
	return num;
}

