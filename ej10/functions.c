/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */
#include <stdio.h>
#include "functions.h"
// EJERCICIO 10
int validate() {
	int num;
	do{
		printf("Introduce el numero de libros que vas a introducir: ");
		scanf("%d", &num);
	}while (num < 1);
	return num;
}
void insertarDatos(struct ej10 *o,int num){
	for(int i=0; i<num;i++){
		printf("Introduce el título del libro: \n");
		scanf("%s", o[i].titol);
		printf("Introduce el autor del libro: \n");
		scanf("%s", o[i].autor);
		printf("Introduce la editorial del libro: \n");
		scanf("%s", o[i].editorial);
		printf("Introduce el dia de publicación del libro: \n");
		scanf("%d", &o[i].date.diaP);
		printf("Introduce el mes de publicación del libro: \n");
		scanf("%d", &o[i].date.mesP);
		printf("Introduce el año de publicación del libro: \n");
		scanf("%d", &o[i].date.anyP);
		printf("Introduce el número de unidades disponibles: \n");
		scanf("%d", &o[i].disponibles);
		printf("Introduce el usuario que tiene el préstamo del libro: \n");
		scanf("%s", o[i].usuari_p);
		printf("Introduce el tiempo de préstamo en dias: \n");
		scanf("%d", &o[i].prestec);
     }
 }
void mostrarDatos(struct ej10 *o,int num){
    for(int i=0; i<num;i++){
    	printf("\n\nEstos son los datos del libro [%d] \n", i+1);
    	printf("Título del libro: %s\n", o[i].titol);
    	printf("Autor del libro: %s\n", o[i].autor);
    	printf("Editorial del libro: %s\n", o[i].editorial);
    	printf("Fecha de publicación: %d/%d/%d\n", o[i].date.diaP, o[i].date.mesP, o[i].date.anyP);
    	printf("Unidades disponibles: %d\n", o[i].disponibles);
    	printf("Usuario que tiene el préstamo: %s\n", o[i].usuari_p);
    	printf("Tiempo de préstamo en dias: %d\n", o[i].prestec);
    }
}
