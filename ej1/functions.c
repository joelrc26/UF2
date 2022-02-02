/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
int validate() {
	int num, count=0;
	do{
		printf("Introdueix un nombre que estigui entre el 10 i el 5000\n");
		scanf("%d", &num);
		count++;
	}while((num<10 || num>5000) && count < 3);
	if(count == 3){
		return -1;
	}else{
	return num;
	}
}
