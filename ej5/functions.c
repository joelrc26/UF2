/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 5
int validate() {
	int num;
	do{
		printf("Introduce un numero el cual después su valor será intercambiado: ");
		scanf("%d", &num);
	}while (num < 0);
	return num;
}
