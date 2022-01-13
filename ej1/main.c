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
/*
// SUMAR NUMEROS
void main(){
	int num1, num2;
	num1 = llegirNum("Introduce el primer número: \n");
	num2 = llegirNum("Introduce el segundo número: \n");
	printf("El resultado es %d\n", sumar(num1, num2));
}
*/
/*
// NOMBRE (FALTA ACABAR)
void main(){
	char *nombre;
	printf("El nombre que has introducido es: %s", name());
}
*/
/*
// LONGITUD CIRCUNFERENCIA
void main(){
	printf("La longitud de la circunferencia es de %.2f cm", longitud());
}
*/
