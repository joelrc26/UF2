/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 4
void main() {
	int nota, count = 0, approved = 0, failed = 0;
	float mediaA = 0, mediaF = 0, resultA = 0, resultF = 0;
	printf("********* INTRODUCE 15 NOTAS *********\n");
	do{
		nota = validate();
		if (nota >= 5) {
			approved += 1;
			resultA += nota;
		}else{
			failed += 1;
			resultF += nota;
		}
		count++;
		printf("Llevas puestas %d notas de 15\n", count);
	}while (count < 15);
	mediaA = resultA / approved;
	mediaF = resultF / failed;
	printf("\nLa cantidad de aprobados son %d\n", approved);
	printf("\nLa cantidad de suspensos son %d\n", failed);
	printf("\nLa nota media de los que han aprobado es un %.2f\n", mediaA);
	printf("\nLa nota media de los que han suspendido es un %.2f\n", mediaF);
}


