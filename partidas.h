/*
 * partidas.h
 *
 *  Created on: 24/11/2014
 *      Author: Android
 */

#ifndef PARTIDAS_H_
#define PARTIDAS_H_


void crearTablero();
void elegirTurno();

char crearTurno();
void cambiarTurno(char turnoActual);
Ficha crearFicha(char turno);



char** crearTablero();//creamos tablero con las 4fichas

int guardado();//booleano, comprobamos lo que mete el usuario!

void insertarFichaEnTablero(Ficha ficha, char tablero[][]);
    int jugadasPosibles(char turnoActual, char tablero[][]);//booleano, se pueden hacer jugadas?
    //si no se pueden hacer jugadas
    void pasarTurno();//Imprimimos la ficha que pasa turno y hacemos cambiarTurno()
    void guardarFicha(Ficha ficha, char tablero[][]);
    int buscarGanador(char tablero[][]);//booleano, tenemos ganador?
        int finDePartida(char tablero[][]);//booleano, tablero lleno?
        char contarFichas(char tablero[][]);//devolvemos el turno con +fichas

int contarFichas(char turno, char tablero[][]);


#endif /* PARTIDAS_H_ */
