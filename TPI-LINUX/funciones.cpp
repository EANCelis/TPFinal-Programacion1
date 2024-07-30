#include "funciones.h"
#include <iomanip>
using namespace std;


void menuPrincipal(int &opcion)
{
    dibujarLogo();
    cout << endl << endl;
    cout << YELLOW << setw(25) << " " << "+---------------------+\n";
    cout << setw(25) << " " << "| 1 - JUGAR           |\n";
    cout << setw(25) << " " << "|---------------------|\n";
    cout << setw(25) << " " << "| 2 - ESTADISTICAS    |\n";
    cout << setw(25) << " " << "|---------------------|\n";
    cout << setw(25) << " " << "| 3 - CREDITOS        |\n";
    cout << setw(25) << " " << "|---------------------|\n";
    cout << setw(25) << " " << "| 0 - SALIR           |\n";
    cout << setw(25) << " " << "+---------------------+\n\n";
    cout << setw(32) << " " << "OPCION: ";
    cin >> opcion;
}
void dibujarLogo()
{
    cout << GREEN"       ___   __  __   ___     _     _   _    ___     _     ___     ___  \n";
    cout << "      | __| |  \\/  | | _ )   /_\\   | | | |  / __|   /_\\   |   \\   / _ \\ \n";
    cout << "      | _|  | |\\/| | | _ \\  / _ \\  | |_| | | (__   / _ \\  | |) | | (_) |\n";
    cout << "      |___| |_|  |_| |___/ /_/ \\_\\  \\___/   \\___| /_/ \\_\\ |___/\   \\___/\n";
}
void mostrarCreditos()
{
    dibujarLogo();
    cout << YELLOW << "\n\n      +---------------------------------------------------------------+\n";
    cout << "      |                           CREDITOS                            |\n";
    cout << "      +---------------------------------------------------------------+\n";
    cout << "      |----------------JUEGO INVENTADO POR ANGEL SIMON----------------|\n";
    cout << "      |------------------------PROGRAMACION 1-------------------------|\n";
    cout << "      |----------------------UTN FRGP | GRUPO 50----------------------|\n";
    cout << setw(38) << left << "      | APELLIDO Y NOMBRE" << setw(12) << "|" << setw(20) << left <<  "LEGAJO" << "|\n";
    cout << "      +---------------------------------------------------------------+\n";
    cout << setw(38) << left << "      | CELIS, EMANUEL ALEJANDRO" << setw(12) << "|" << setw(20) << left << "20234" << "|\n";
    cout << "      +---------------------------------------------------------------+\n\n";
    int opc;
    cout << " PRESIONE 0 PARA VOLVER AL MENU PRINCIPAL..." ;
    cin >> opc;
    while (opc != 0)
    {
        cout << " POR FAVOR, PRESIONE 0 PARA VOLVER AL MENU PRINCIPAL...";
        cin >> opc;
    }
}
void mostrarEstadisticas(string nombreMaximoGanador, int acuPuntosMaximoGanador)
{
    dibujarLogo();
    cout << YELLOW "\n\n      +---------------------------------------------------------------+\n";
    cout << "      |                       ESTADISTICAS                            |\n";
    cout << "      +---------------------------------------------------------------+\n\n";
    if (nombreMaximoGanador != "")
    {
        cout << "      +---------------------------------------------------------------+\n";
        cout << setw(28) << left << "      | MAXIMO GANADOR" << "|     " << setw(36) << "PUNTOS" << "|\n";
        cout << "      +---------------------------------------------------------------+\n";
        cout << "      | " << setw(20) << left << nombreMaximoGanador << "|     " << setw(36) << left << acuPuntosMaximoGanador << "|\n";
        cout << "      +---------------------------------------------------------------+\n\n";
    }
    else
    {
        cout << "      +---------------------------------------------------------------+\n";
        cout << "      |                AUN NO SE JUGO NINGUNA PARTIDA                 |" << endl;
        cout << "      +---------------------------------------------------------------+\n\n";
    }
    int opc;
    cout << " PRESIONE 0 PARA VOLVER AL MENU PRINCIPAL..." ;
    cin >> opc;
    while (opc != 0)
    {
        cout << " POR FAVOR, PRESIONE 0 PARA VOLVER AL MENU PRINCIPAL...";
        cin >> opc;
    }

}
void menuJugar(int &acuPuntosGanadorPartida, string &ganadorPartida)
{
    char opcion, opcIncorrecta;
    string nombreJugador1, nombreJugador2;
    dibujarLogo();
    cout << YELLOW "------------------------------------------------------------------------------" << endl;
    cout << "      Antes de comenzar deben registrar sus nombres:" << endl;

    cout << "      ¿Nombre del Jugador 1?  ";
    cin >> nombreJugador1;
    cout << "      ¿Nombre del Jugador 2?  ";
    cin >> nombreJugador2;
    cout << endl;


    cout << "      ¿Confirmar nombres? (S/N)  ";
    cin >> opcion;
    cout << endl;
    while ((opcion != 'S') && (opcion != 's'))
    {
        if (opcion == 'N' || opcion == 'n')
        {
            system("clear");
            dibujarLogo();
            cout << YELLOW "------------------------------------------------------------------------------" << endl;
            cout << "      Antes de comenzar deben registrar sus nombres:" << endl;
            cout << "      ¿Nombre del Jugador 1?  ";
            cin >> nombreJugador1;
            cout << "      ¿Nombre del Jugador 2?  ";
            cin >> nombreJugador2;
            cout << endl;


            cout << "      ¿Confirmar nombres? (S/N)  ";
            cin >> opcion;
            cout << endl;
        }
        else
        {
            system("clear");
            dibujarLogo();
            cout << YELLOW "------------------------------------------------------------------------------" << endl;
            cout << "      Antes de comenzar deben registrar sus nombres:" << endl;
            cout << "      ¿Nombre del Jugador 1?  " << nombreJugador1 << endl;
            cout << "      ¿Nombre del Jugador 2?  " << nombreJugador2 << endl << endl;
            cout << YELLOW "      Ingresaste una opcion incorrecta.\n      Presiona S o N para confirmar o rechazar los nombres ingresados: " ;
            cin >> opcion;
        }
    }
    cout << "------------------------------------------------------------------------------" << endl;
    jugarRonda(nombreJugador1, nombreJugador2, acuPuntosGanadorPartida, ganadorPartida);



}
int calcularPuntos(int naipe)
{
    if (naipe <= 5)
    {
        naipe = naipe;
    }
    else if(naipe <= 10)
    {
        naipe = naipe - 5;
    }
    else if(naipe <= 15)
    {
        naipe = naipe - 10;
    }
    else
    {
        naipe = naipe - 15;
    }
    switch (naipe)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    case 3:
        return 3;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 10;
        break;
    }
}
void preguntarCambioEmbaucadora(string nombreJugador, char &opcionEmbaucadora, string embaucadora)
{
    cout << endl << YELLOW " "<< nombreJugador << ", ¿Deseas modificar la carta embaucadora actual (" << embaucadora << ") ? (S/N): ";
    cin >> opcionEmbaucadora;
    while (opcionEmbaucadora != 'N' && opcionEmbaucadora != 'S' && opcionEmbaucadora != 's' && opcionEmbaucadora != 'n')
    {
        cout << " Elegiste una opcion incorrecta! Debes elegir S (Si) o N (No)" << endl;
        cout << " " << nombreJugador << ", ¿Deseas modificar la carta embaucadora actual (" << embaucadora << ") ? (S/N): ";
        cin >> opcionEmbaucadora;
    }
}
//void calcularPuntosRonda(int vPuntajes[], string nombreJugador1, string nombreJugador2, int &puntosTotalJugador1, int &puntosTotalJugador2, int &puntosPorRondaJ1, int &puntosPorRondaJ2, string &numeroNaipe, string &palo, string embaucadora, int vCartasJ1[], int vCartasJ2[], int auxJ1, int auxJ2)
void calcularPuntosRonda(int vPuntajes[], string nombreJugador1, string nombreJugador2, int &puntosTotalJugador1, int &puntosTotalJugador2, int &puntosPorRondaJ1, int &puntosPorRondaJ2, string &numeroNaipe, string &palo, string embaucadora, int vCartasJ1[], int vCartasJ2[])
{
    int auxJ1 = -1, auxJ2 = 5;
    for (int x=0; x<10; x++)
    {
        if (x < 5)
        {
            generarNaipe(vCartasJ1[x], numeroNaipe, palo);
            if (palo != embaucadora)
            {
                auxJ1++;
                vPuntajes[auxJ1] = calcularPuntos(vCartasJ1[x]);
            }
        }
        else
        {
            generarNaipe(vCartasJ2[x-5], numeroNaipe, palo);
            if (palo != embaucadora)
            {
                auxJ2++;
                vPuntajes[auxJ2] = calcularPuntos(vCartasJ2[x-5]);
            }
        }
    }
    cout << YELLOW "\n\n Puntajes obtenidos:\n";
    cout << "------------------------------------------------------------------------------" << endl;
    cout << " " << nombreJugador1 << ": ";
    for (int x=0; x<=auxJ1; x++)
    {
        if (vPuntajes[x] != 0)
        {
            puntosTotalJugador1+=vPuntajes[x];
            puntosPorRondaJ1+=vPuntajes[x];
            cout << vPuntajes[x];
            if (vPuntajes[x+1] != 0)
            {
                cout << " + ";
            }
        }
    }
    cout << " = " << puntosPorRondaJ1 << " puntos\n\n";
    cout << " " << nombreJugador2 << ": ";
    for (int x=6; x<=auxJ2; x++)
    {
        if (vPuntajes[x] != 0)
        {
            puntosPorRondaJ2+=vPuntajes[x];
            puntosTotalJugador2+=vPuntajes[x];
            cout << vPuntajes[x];
            if (vPuntajes[x+1] != 0)
            {
                cout << " + ";
            }
        }
    }
    cout << " = " << puntosPorRondaJ2 << " puntos\n\n";
}
void generarEmbaucadora(int naipe, string &embaucadora)
{
    switch (naipe)
    {
    case 1:
        embaucadora = "Corazon";
        break;
    case 2:
        embaucadora = "Diamante";
        break;
    case 3:
        embaucadora = "Pica";
        break;
    case 4:
        embaucadora = "Trebol";
        break;
    }
}
void generarNaipe(int naipe, string &numeroNaipe, string &palo)
{
    if (naipe <= 5)
    {
        palo = "Corazon";
    }
    else if(naipe <= 10)
    {
        palo = "Diamante";
        naipe = naipe - 5;
    }
    else if(naipe <= 15)
    {
        palo = "Pica";
        naipe = naipe - 10;
    }
    else
    {
        palo = "Trebol";
        naipe = naipe - 15;
    }

    switch (naipe)
    {
    case 1:
        numeroNaipe = "10";
        break;
    case 2:
        numeroNaipe = "J";
        break;
    case 3:
        numeroNaipe = "Q";
        break;
    case 4:
        numeroNaipe = "K";
        break;
    case 5:
        numeroNaipe = "A";
        break;
    }
}
void calcularGanador(string nombreJugador1, string nombreJugador2, int acuJ1, int acuJ2, string &ganadorPartida, int vRondasJ1[], int vRondasJ2[])
{
    if (acuJ1 > acuJ2)
    {
        ganadorPartida = nombreJugador1;
    }
    else if (acuJ1 < acuJ2)
    {
        ganadorPartida = nombreJugador2;
    }
    else
    {
        ganadorPartida = "";
    }
}
void desempatar(string nombreJugador1, string nombreJugador2, string &ganadorPartida, int vRondasJ1[], int vRondasJ2[])
{
    int maxJ1 = 0, maxJ2 = 0;
    for (int x=0; x<3; x++)
    {
        if (vRondasJ1[x] > maxJ1)
        {
            maxJ1 = vRondasJ1[x];
        }
        if (vRondasJ2[x] > maxJ2)
        {
            maxJ2 = vRondasJ2[x];
        }
    }
    if (maxJ1 > maxJ2)
    {
        ganadorPartida = nombreJugador1;
    }
    else if (maxJ1 < maxJ2)
    {
        ganadorPartida = nombreJugador2;
    }
    else {
        ganadorPartida = "";
    }
}
void puntuacionFinal(string nombreJugador1, int &acuPuntosGanadorPartida, string &ganadorPartida, string nombreJugador2, int vRondasJ1[], int vRondasJ2[])
{
    int acuJ1 = 0, acuJ2 = 0;
    int opc;
    dibujarLogo();
    cout << YELLOW "\n\n      +---------------------------------------------------------------+\n";
    cout << "      |RONDA\t\t"<< "| " << setw(22) << left << nombreJugador1 << "| " << setw(20) << left << nombreJugador2<< "|" <<endl;
    cout << "      +---------------------------------------------------------------+\n";
    for (int x=0; x<3; x++)
    {
        cout << "      |#" << x+1 << "\t\t| " << vRondasJ1[x] << "\t\t\t| " << setw(20) << left << vRondasJ2[x] << "|" << endl;
        if (x < 2)
        {
            cout << "      +---------------------------------------------------------------+\n";
        }
        else
        {
            cout << "      +---------------------------------------------------------------+";
        }
        acuJ1+=vRondasJ1[x];
        acuJ2+=vRondasJ2[x];
    }
    cout << endl;
    cout << "      +---------------------------------------------------------------+\n";
    cout << "      | TOTAL\t\t| " << setw(22) << left << acuJ1 << "| " << setw(20) << left << acuJ2 << "|" << endl;
    cout << "      +---------------------------------------------------------------+\n\n";
    calcularGanador(nombreJugador1, nombreJugador2, acuJ1, acuJ2, ganadorPartida, vRondasJ1, vRondasJ1);
    if (ganadorPartida == nombreJugador1)
    {
        cout << "      +---------------------------------------------------------------+\n";
        cout << "      | GANADOR: " << setw(12) << left << ganadorPartida << " con " << acuJ1 << " puntos de victoria\t      |\n";
        cout << "      +---------------------------------------------------------------+\n\n";
        acuPuntosGanadorPartida = acuJ1;
    }
    else if (ganadorPartida == nombreJugador2)
    {
        cout << "      +---------------------------------------------------------------+\n";
        cout << "      | GANADOR: " << setw(12) << left << ganadorPartida << " con " << acuJ2 << " puntos de victoria\t      |\n";
        cout << "      +---------------------------------------------------------------+\n\n";
        acuPuntosGanadorPartida = acuJ2;
    }
    else
    {
        cout << "\n      Hubo un empate con " << acuJ2 << " puntos totales cada uno.\n\n";
        cout << "      Se procederá a dar por ganador al jugador que tenga el puntaje maximo en alguna de las 3 rondas...\n";
        desempatar(nombreJugador1, nombreJugador2, ganadorPartida, vRondasJ1, vRondasJ2);
        if (ganadorPartida != "")
        {
            cout << "\n      Por tener mas puntos en alguna de las 3 rondas, el ganador es: " << ganadorPartida << endl << endl;
        }
        else
        {
            cout << "\n      El juego termina en EMPATE ya que los puntajes maximos obtenidos en alguna de las 3 rondas son los mismos!\n\n";
        }
    }

    cout << " PRESIONE 0 PARA VOLVER AL MENU PRINCIPAL..." ;
    cin >> opc;
    while (opc != 0)
    {
        cout << endl << " POR FAVOR, INGRESA 0 PARA VOLVER AL MENU PRINCIPAL...";
        cin >> opc;

    }
}
void calcularMaximoGanador(string ganadorPartida, int acuPuntosGanadorPartida, string &nombreMaximoGanador, int &acuMaximoGanador)
{
    if (acuPuntosGanadorPartida > acuMaximoGanador)
    {
        nombreMaximoGanador = ganadorPartida;
        acuMaximoGanador = acuPuntosGanadorPartida;
    }
}
void dibujarRondaCambioEmbaucadora(int &puntosTotalJugador1, int &puntosTotalJugador2, int x, string numeroNaipe, string palo, string &embaucadora, string nombreJugador1, string nombreJugador2, int vCartasJ1[], int vCartasJ2[])
{
    int naipe;
    dibujarLogo();
    cout << YELLOW "------------------------------------------------------------------------------" << endl;
    cout << "      RONDA #" << x << endl << endl;
    cout << "      " << nombreJugador1<< " Vs " << nombreJugador2 << "\n\n";
    cout << "      +----------------------------------+\n";
    cout << "      |                                  |" << endl;
    cout << "      | " << left << setw(11) <<  nombreJugador1 << "(" << setw(3) << puntosTotalJugador1<< " puntos)" << setw(11)<< right << "|" << endl;
    for (int j1=0; j1 < 5; j1++)
    {
        generarNaipe(vCartasJ1[j1], numeroNaipe, palo);
        cout << "      |" << setw(5) << right << numeroNaipe << " " << setw(20) << left <<  palo << " "<< setw(8) << right << "|" << endl;
    }
    cout << "      |                                  |\n";
    cout << "      +----------------------------------+\n";
    cout << "      |                                  |\n";
    cout << "      | " << left << setw(11) <<  nombreJugador2 << "(" << setw(3) << puntosTotalJugador2 << " puntos)" << setw(11) << right << "|";
    cout << endl;
    for (int j2=0; j2<5; j2++)
    {
        generarNaipe(vCartasJ2[j2], numeroNaipe, palo);
        cout << "      |" << right << setw(5) << numeroNaipe << " " << setw(20) << left << palo << " "<< setw(8) << right << "|" << endl;
    }
    cout << "      |                                  |\n";
    naipe = (rand()%4)+1;
    generarEmbaucadora(naipe, embaucadora);
    cout << "      +----------------------------------+\n";
    cout << "      | Embaucadora: " << setw(10) << left << embaucadora << setw(11) << right << "|" << endl;
    cout << "      +----------------------------------+\n";
}
void jugarRonda(string nombreJugador1, string nombreJugador2, int &acuPuntosGanadorPartida, string &ganadorPartida)
{
    system("clear");
    int naipe, opc;
    int vRondasJ1[3];
    int vRondasJ2[3];
    int puntosTotalJugador1 = 0, puntosTotalJugador2 = 0;
    string numeroNaipe, palo, embaucadora;
    for (int x=1; x <= 3; x++)
    {
        //int auxJ1 = -1, auxJ2 = 5;
        int puntosPorRondaJ2 = 0, puntosPorRondaJ1 = 0;
        int vPuntajes[12] = {};
        int vCartasJ1[5] = {};
        int vCartasJ2[5] = {};
        int vCartas[20] = {};
        char opcionEmbaucadora;
        dibujarLogo();
        cout << YELLOW "------------------------------------------------------------------------------" << endl;
        cout << "      RONDA #" << x << "\n\n";
        cout << "      " << nombreJugador1<< " Vs " << nombreJugador2 << "\n\n";

        cout << "      +----------------------------------+\n";
        cout << "      |                                  |" << endl;
        cout << "      | " << left << setw(11) <<  nombreJugador1 << "(" << setw(3) << puntosTotalJugador1<< " puntos)" << setw(11)<< right << "|" << endl;
        for (int j1=0; j1 < 5; j1++)
        {
            naipe = (rand()%20) + 1;
            if (j1 == 0)
            {
                generarNaipe(naipe, numeroNaipe, palo);
                vCartas[naipe-1]++;
                vCartasJ1[j1] = naipe;
            }
            else
            {
                while (vCartas[naipe-1] == 1)
                {
                    naipe = (rand()%20) + 1;
                }
                vCartasJ1[j1] = naipe;
                generarNaipe(naipe, numeroNaipe, palo);
                vCartas[naipe-1]++;
            }
            cout << "      |" << setw(5) << right << numeroNaipe << " " << setw(20) << left <<  palo << " "<< setw(8) << right << "|" << endl;
        }
        cout << "      |                                  |\n";
        cout << "      +----------------------------------+\n";
        cout << "      |                                  |\n";
        cout << "      | " << left << setw(11) <<  nombreJugador2 << "(" << setw(3) << puntosTotalJugador2 << " puntos)" << setw(11) << right << "|";
        cout << endl;
        for (int j2=0; j2<5; j2++)
        {
            naipe = (rand()%20) + 1;
            while (vCartas[naipe-1] == 1)
            {
                naipe = (rand()%20) + 1;
            }
            vCartasJ2[j2] = naipe;
            vCartas[naipe-1]++;
            generarNaipe(naipe, numeroNaipe, palo);
            cout << "      |" << right << setw(5) << numeroNaipe << " " << setw(20) << left << palo << " "<< setw(8) << right << "|" << endl;
        }
        naipe = (rand()%4) + 1;
        generarEmbaucadora(naipe, embaucadora);
        cout << "      |                                  |\n";
        cout << "      +----------------------------------+\n";
        cout << "      | Embaucadora: " << setw(10) << left << embaucadora << setw(11) << right << "|" << endl;
        cout << "      +----------------------------------+\n";
        //CALCULO DE PUNTAJE DE CADA JUGADOR ROUND 1
        if (x == 1)
        {
            //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
            calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
            vRondasJ1[x-1] = puntosPorRondaJ1;
            vRondasJ2[x-1] = puntosPorRondaJ2;
            cout << " INGRESE 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
            cin >> opc;
            while (opc != 0)
            {
                cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\n POR FAVOR, PRESIONA 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                cin >> opc;
            }
            system("clear");
        }
        //SEGUNDA RONDA
        else if (x == 2)
        {
            //PREGUNTA A JUGADOR 1
            cout << endl;
            if (puntosTotalJugador1 >= 20)
            {
                preguntarCambioEmbaucadora(nombreJugador1, opcionEmbaucadora, embaucadora);
                if ((opcionEmbaucadora == 'S' || opcionEmbaucadora == 's'))
                {
                    system("clear");
                    puntosTotalJugador1-=20;
                    puntosPorRondaJ1-=20;
                    dibujarRondaCambioEmbaucadora(puntosTotalJugador1, puntosTotalJugador2, x, numeroNaipe, palo, embaucadora, nombreJugador1, nombreJugador2, vCartasJ1, vCartasJ2);
                    //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                    calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                    vRondasJ1[x-1] = puntosPorRondaJ1;
                    vRondasJ2[x-1] = puntosPorRondaJ2;
                    cout << " INGRESE 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                    cin >> opc;
                    while (opc != 0)
                    {
                        cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                        cin >> opc;
                    }
                    system("clear");

                }
                else
                {
                    //ANTE LA RESPUESTA NEGATIVA DE JUGADOR 1, PREGUNTA A JUGADOR 2
                    if (puntosTotalJugador2 >= 20)
                    {
                        preguntarCambioEmbaucadora(nombreJugador2, opcionEmbaucadora, embaucadora);
                        if ((opcionEmbaucadora == 'S' || opcionEmbaucadora == 's'))
                        {
                            system("clear");
                            puntosTotalJugador2-=20;
                            puntosPorRondaJ2-=20;
                            dibujarRondaCambioEmbaucadora(puntosTotalJugador1, puntosTotalJugador2, x, numeroNaipe, palo, embaucadora, nombreJugador1, nombreJugador2, vCartasJ1, vCartasJ2);
                            //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                            calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                            vRondasJ1[x-1] = puntosPorRondaJ1;
                            vRondasJ2[x-1] = puntosPorRondaJ2;
                            cout << " INGRESE 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                            cin >> opc;
                            while (opc != 0)
                            {
                                cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                                cin >> opc;
                            }
                            system("clear");
                        }
                        else
                        {
                            //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                            calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                            vRondasJ1[x-1] = puntosPorRondaJ1;
                            vRondasJ2[x-1] = puntosPorRondaJ2;
                            cout << " INGRESE 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                            cin >> opc;
                            while (opc != 0)
                            {
                                cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                                cin >> opc;
                            }
                            system("clear");
                        }
                    }
                    else
                    {
                        //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                        calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                        vRondasJ1[x-1] = puntosPorRondaJ1;
                        vRondasJ2[x-1] = puntosPorRondaJ2;
                        cout << " INGRESE 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                        cin >> opc;
                        while (opc != 0)
                        {
                            cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                            cin >> opc;
                        }
                        system("clear");
                    }

                }
            }
            else if (puntosTotalJugador2 >= 20)
            {
                //SI LOS PUNTOS DE JUGADOR 1 NO SUPERAN LOS 20, SE LE PREGUNTA AL JUGADOR 2
                preguntarCambioEmbaucadora(nombreJugador2, opcionEmbaucadora, embaucadora);
                if ((opcionEmbaucadora == 'S' || opcionEmbaucadora == 's'))
                {
                    system("clear");
                    puntosTotalJugador2-=20;
                    puntosPorRondaJ2-=20;
                    dibujarRondaCambioEmbaucadora(puntosTotalJugador1, puntosTotalJugador2, x, numeroNaipe, palo, embaucadora, nombreJugador1, nombreJugador2, vCartasJ1, vCartasJ2);
                    //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                    calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                    vRondasJ1[x-1] = puntosPorRondaJ1;
                    vRondasJ2[x-1] = puntosPorRondaJ2;
                    cout << " INGRESE 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                    cin >> opc;
                    while (opc != 0)
                    {
                        cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                        cin >> opc;
                    }
                    system("clear");
                }
                else
                {
                    //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                    calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                    vRondasJ1[x-1] = puntosPorRondaJ1;
                    vRondasJ2[x-1] = puntosPorRondaJ2;
                    cout << " INGRESE 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                    cin >> opc;
                    while (opc != 0)
                    {
                        cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                        cin >> opc;
                    }
                    system("clear");
                }
            }
            else
            {
                //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                vRondasJ1[x-1] = puntosPorRondaJ1;
                vRondasJ2[x-1] = puntosPorRondaJ2;
                cout << " INGRESE 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                cin >> opc;
                while (opc != 0)
                {
                    cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR A LA RONDA #" << x+1 << "...";
                    cin >> opc;
                }
                system("clear");
            }
        }
        //TERCERA RONDA
        else
        {
            //PREGUNTA A JUGADOR 2
            cout << endl;
            if (puntosTotalJugador2 >= 20)
            {
                preguntarCambioEmbaucadora(nombreJugador2, opcionEmbaucadora, embaucadora);
                if ((opcionEmbaucadora == 'S' || opcionEmbaucadora == 's'))
                {
                    system("clear");
                    puntosTotalJugador2-=20;
                    puntosPorRondaJ2-=20;
                    dibujarRondaCambioEmbaucadora(puntosTotalJugador1, puntosTotalJugador2, x, numeroNaipe, palo, embaucadora, nombreJugador1, nombreJugador2, vCartasJ1, vCartasJ2);
                    //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                    calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                    vRondasJ1[x-1] = puntosPorRondaJ1;
                    vRondasJ2[x-1] = puntosPorRondaJ2;
                }
                else
                {
                    //ANTE LA RESPUESTA NEGATIVA DEL JUGADOR 2, PREGUNTA AL JUGADOR 1
                    if (puntosTotalJugador1 >= 20)
                    {
                        preguntarCambioEmbaucadora(nombreJugador1, opcionEmbaucadora, embaucadora);
                        if ((opcionEmbaucadora == 'S' || opcionEmbaucadora == 's'))
                        {
                            system("clear");
                            puntosTotalJugador1-=20;
                            dibujarRondaCambioEmbaucadora(puntosTotalJugador1, puntosTotalJugador2, x, numeroNaipe, palo, embaucadora, nombreJugador1, nombreJugador2, vCartasJ1, vCartasJ2);
                            //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                            calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                            vRondasJ1[x-1] = puntosPorRondaJ1;
                            vRondasJ2[x-1] = puntosPorRondaJ2;
                        }
                        else
                        {
                            //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                            calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                            vRondasJ1[x-1] = puntosPorRondaJ1;
                            vRondasJ2[x-1] = puntosPorRondaJ2;
                        }
                    }
                    else {
                            //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                            calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                            vRondasJ1[x-1] = puntosPorRondaJ1;
                            vRondasJ2[x-1] = puntosPorRondaJ2;
                            cout << " INGRESE 0 PARA CONTINUAR...";
                            cin >> opc;
                            while (opc != 0)
                            {
                                cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR...";
                                cin >> opc;
                            }
                            system("clear");
                    }
                }
            }
            else if (puntosTotalJugador1 >= 20)
            {
                //SI LOS PUNTOS DE JUGADOR 2 NO SUPERAN LOS 20, SE LE PREGUNTA AL JUGADOR 1
                preguntarCambioEmbaucadora(nombreJugador1, opcionEmbaucadora, embaucadora);
                if ((opcionEmbaucadora == 'S' || opcionEmbaucadora == 's'))
                {
                    system("clear");
                    puntosTotalJugador1-=20;
                    puntosPorRondaJ1-=20;
                    dibujarRondaCambioEmbaucadora(puntosTotalJugador1, puntosTotalJugador2, x, numeroNaipe, palo, embaucadora, nombreJugador1, nombreJugador2, vCartasJ1, vCartasJ2);
                    //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                    calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                    vRondasJ1[x-1] = puntosPorRondaJ1;
                    vRondasJ2[x-1] = puntosPorRondaJ2;
                }
                else
                {
                    //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                    calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                    vRondasJ1[x-1] = puntosPorRondaJ1;
                    vRondasJ2[x-1] = puntosPorRondaJ2;
                }
            }
            else
            {
                //calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2, auxJ1, auxJ2);
                calcularPuntosRonda(vPuntajes, nombreJugador1, nombreJugador2, puntosTotalJugador1, puntosTotalJugador2, puntosPorRondaJ1, puntosPorRondaJ2, numeroNaipe, palo, embaucadora, vCartasJ1, vCartasJ2);
                vRondasJ1[x-1] = puntosPorRondaJ1;
                vRondasJ2[x-1] = puntosPorRondaJ2;
            }
        }
    }
    cout << " INGRESE 0 PARA CONTINUAR...";
    cin >> opc;
    while (opc != 0)
    {
        cout << endl << " INGRESASTE UNA TECLA INCORRECTA!\nPOR FAVOR, PRESIONA 0 PARA CONTINUAR...";
        cin >> opc;
    }
    system("clear");
    cout << endl;
    puntuacionFinal(nombreJugador1, acuPuntosGanadorPartida, ganadorPartida, nombreJugador2, vRondasJ1, vRondasJ2);

}
