/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 8
int validate() {
	int num;
	do{
		printf("Introduce un número: ");
		scanf("%d", &num);
	}while (num < 0);
	return num;
}
