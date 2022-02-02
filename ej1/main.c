/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */

#include <stdio.h>
#include "functions.h"
void main(){
	int num1;
	num1 = validate();
	do{
		printf("Te has equivocado 3 veces\n");
		num1 = validate();
	}while(num1 == -1);
	printf("Has introducido el %d", num1);
}
