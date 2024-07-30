#pragma once
#include <iostream>
#include <string>
//===Colores de Letras===/
#define GREEN   "\x1b[32m"
#define WHITE   "\x1B[37m"
#define YELLOW  "\x1b[33m"

using namespace std;

void menuPrincipal(int &opcion);
void menuJugar(int &acuPuntosGanadorPartida, string &ganadorPartida);
void mostrarEstadisticas(string nombreMaximoGanador, int acuPuntosMaximoGanador);
void mostrarCreditos();
void jugarRonda(string nombreJugador1, string nombreJugador2, int &acuPuntosGanadorPartida, string &ganadorPartida);
void generarNaipe(int naipe, string &numeroNaipe, string &palo);
void generarEmbaucadora(int naipe, string &embaucadora);
int calcularPuntos(int naipe);
void dibujarRondaCambioEmbaucadora(int &puntosTotalJugador1, int &puntosTotalJugador2, int x, string numeroNaipe, string palo, string &embaucadora, string nombreJugador1, string nombreJugador2, int vCartasJ1[], int vCartasJ2[]);
void calcularPuntosRonda(int vPuntajes[], string nombreJugador1, string nombreJugador2, int &puntosTotalJugador1, int &puntosTotalJugador2, int &puntosPorRondaJ1, int &puntosPorRondaJ2, string &numeroNaipe, string &palo, string embaucadora, int vCartasJ1[], int vCartasJ2[], int auxJ1, int auxJ2);
void preguntarCambioEmbaucadora(string nombreJugador, char &opcionEmbaucado, string embaucadora);
void puntuacionFinal(string nombreJugador1, int &acuPuntosGanadorPartida, string &ganadorPartida, string nombreJugador2, int vRondasJ1[], int vRondasJ2[]);
void calcularGanador(string nombreJugador1, string nombreJugador2, int acuJ1, int acuJ2, string &ganadorPartida, int vRondasJ1[], int vRondasJ2[]);
void calcularMaximoGanador(string ganadorPartida, int acuPuntosGanadorPartida, string &nombreMaximoGanador, int &acuMaximoGanador);
void desempatar(string nombreJugador1, string nombreJugador2, string &ganadorPartida, int vRondasJ1[], int vRondasJ2[]);
void dibujarLogo();
