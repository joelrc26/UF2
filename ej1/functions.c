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
/*
// SUMAR NUMEROS
int sumar(int num1, int num2){
	return num1 + num2;
}

int llegirNum(char *msg){
	int num;
	printf("%s", msg);
	scanf("%d", &num);
	return num;
}
*/
/*
// NOMBRE (FLTA ACABAR)
char name() {
	char *nombre;
	printf("Introduce tu nombre:\n");
	scanf("%s", nombre);
	return nombre;
}
*/
/*
// LONGITUD CIRCUNFERENCIA
float longitud (){
	int num;
	do {
		printf("Introduce el radio de tu circunferencia en cm: ");
		scanf("%d", &num);
	}while (num < 1);
	return 2 * PI * num;
}
*/
