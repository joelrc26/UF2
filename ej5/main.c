/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 5
void main(){
	int num1, num2, aux;
	num1 = validate();
	num2 = validate();
	aux = num1;
	num1 = num2;
	num2 = aux;
	printf("El primer número es el %d y el segundo número es el %d", num1, num2);
}
