/*
 * partidas.c

 *
 *  Created on: 24/11/2014
 *      Author: Android
 */
#include <stdio.h>
#include <string.h>
#include "partidas.h"
#ifndef DIM
#define DIM 8
#ifndef BLANCO
#define BLANCO 'x'
#ifndef NEGRO
#define NEGRO 'o'
enum{OK=0, ERR=1};
char crearTurno(){
    int i=-1;
    char turno;
    do{
    if(i!=-1){
        printf("\n \t >>>>>>Debe elegir una ficha permitita. \n");
    }
    printf("Elija la ficha con la que quiere juagar:\n\t 1. x \n\t 2. o\n" );
    scanf("%d",i);
    }while(i!=1 || i!=2);
    if(i==1){
        turno=BLANCO;
    }
    else{
        turno=NEGRO;
    }
    return turno;
}


int contarFichas(char turno, char tablero[][]){
    int i,j, contador=0;
    if(!tablero || !turno){//si no paso nada
        return 2;
    }
    for (i=0; i<DIM+1; i++){
        for(j=0; j<DIM+1; j++){
            if(!tablero[i][j]){
                continue;
            }
            if(strcmp(tablero[i][j], turno)){
                contador++;
            }
        }
    }
    return contador;
}
int guardado(){//booleano, comprobamos lo que mete el usuario!
	char fila='.';
	do{
		if(fila<61 && fila>68 ){
			printf("Debe insertar una fila existente.");
		}

		printf("Introduzca la fila donde quiere insertar la ficha (letra de la a-h) :");
		fflush( stdout );
		fila=getche();

	}while(fila<61 && fila>68 );




}

void insertarFichaEnTablero(Ficha ficha, char tablero[][]);
    int jugadasPosibles(char turnoActual, char tablero[][]);//booleano, se pueden hacer jugadas?
    //si no se pueden hacer jugadas
    void pasarTurno();//Imprimimos la ficha que pasa turno y hacemos cambiarTurno()
    void guardarFicha(Ficha ficha, char tablero[][]);
    int buscarGanador(char tablero[][]){;//booleano, tenemos ganador?

    }
        int finDePartida(char tablero[][]){//booleano, tablero lleno?
        	int i,j;
        	if(!tablero){
        		return -1;
        	}
        	for(i=0; i<DIM+1; i++){
        		for(j=0; j<DIM+1; j++){
        			if(!tablero[i][j]){//si alguna casilla esta nula
        				return ERR;//false
        			}
        		}
        	}
        	return OK;//true
        }
        char contarFichas(char tablero[][]);//devolvemos el turno con +fichas



