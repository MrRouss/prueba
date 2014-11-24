/*
 * main.c
 *
 *  Created on: 24/11/2014
 *      Author: Android
 */


#include <stdio.h>
#include <stdlib.h>

#include "cabecera.h"
#include "partidas.h"


typedef struct{
    char turno;
    int ejex;
    int ejey;
}Ficha;

int main(int argc, char** argv) {
    int opcion=0;
    imprimirCabecera();
    opcion=imprimirMenu();
    switch(opcion){
        case 1:
            iniciarPartida();
            break;
        case 2:
            imprimirEstadisticas();
            break;
        case 3:
            salir();
            break;
        default:    break;
    }

    return (EXIT_SUCCESS);
}
