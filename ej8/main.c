/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 8
void main() {
    int num1, num2, result = 1, count = 1;
    num1 = validate();
    num2 = validate();
    do{
    	result = result * num1;
        count++;
    }while(count <= num2);
    printf("El resultado es igual a: %d", result);
}
