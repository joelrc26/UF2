/*
 * functions.h
 *
 *  Created on: 17 dic 2021
 *      Author: joelrc
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#define PI 3.1415926536
#endif /* FUNCTIONS_H_ */
// EJERCICIO 10
struct publication{
	int diaP;
	int mesP;
	int anyP;
};
struct ej10 {
	char titol[50];
	char autor[20];
	char editorial[35];
	int disponibles;
	char usuari_p[20];
	int prestec;
	struct publication date;
};
