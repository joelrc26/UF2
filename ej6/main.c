/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 6
void main(){
	int num, sum = 0, count = 0;
	num = validate();
	do {
		sum = sum + count;
		if (sum <= num){
			printf("%d ", count);
			count++;
		}
	}while(sum <= num);
	printf("\nLa suma de los números es: %d",sum - count);
}
