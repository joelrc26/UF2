/*
 * main.c
 *
 *  Created on: 14 ene 2022
 *      Author: joelrc
 */
// EJERCICIO 3
#include <stdio.h>
#include "functions.h"
void main() {
    int num1, count = 1, binary = 0, rem = 0;
    num1 = validate();
    do{
    	rem = num1 % 2;
    	num1 = num1 / 2;
    	binary = binary + (rem * count);
    	count = count * 10;
    }while (num1 != 0);
    printf("La seva conversió a binari és: %d", binary);
}

