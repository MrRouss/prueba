/*
 * cabecera.c
 *
 *  Created on: 24/11/2014
 *      Author: Android
 */


#include "cabecera.h"




void salir(){
	int i;

	for(i=0; i<20; i++){
		printf("\n");
	}
	printf(">>>>>Gracias por visitarnos.");
}
int imprimirMenu(){
    int i=-1;
    do{
        if(i!=-1){
            printf("\n \t >>>>>>Debe elegir una opcion permitita. \n");
        }
        printf(">>MENU\n Elija la accion que desea realizar:\n\t"
                " 1. Iniciar partida \n\t"
                " 2. Ver Estadisticas\n\t"
                " 3. Salir\n" );
        scanf("%d",i);
    }while(i!=1 || i!=2 || i!=3);
    return i;
}

void imprimirCabecera(){
    printf(">>>>>>>>>>>>>>Bienvenido a Reversi\n");
    imprimirContador(NULL);
    imprimirTablero(NULL);

}

void imprimirContador(char tablero[][]){
    printf("x: %d \t\t\t\t o:%d", contarFichas("x", tablero), contarFichas("o", tablero));
}
