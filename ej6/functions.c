/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 6
int validate() {
	int num;
	do{
		printf("Introduce un numero: ");
		scanf("%d", &num);
	}while (num < 0);
	return num;
}
