#include <iostream>
#include <ctime>
#include "funciones.h"
#include <string>
using namespace std;

int main()
{
    srand(time(0));
    int opcion, acuMaximoGanador = 0, acuPuntosGanadorPartida;
    string def;
    char opcSalir;
    string nombreMaximoGanador, ganadorPartida;
    while (true)
    {
        system("clear");
        menuPrincipal(opcion);
        switch (opcion)
        {
        case 1:
            system("clear");
            menuJugar(acuPuntosGanadorPartida, ganadorPartida);
            calcularMaximoGanador(ganadorPartida, acuPuntosGanadorPartida, nombreMaximoGanador, acuMaximoGanador);
            break;
        case 2:
            system("clear");
            mostrarEstadisticas(nombreMaximoGanador, acuMaximoGanador);
            break;
        case 3:
            system("clear");
            mostrarCreditos();
            break;
        case 0:
            system("clear");
            dibujarLogo();
            cout << YELLOW "------------------------------------------------------------------------------" << endl;
            cout << "¿Realmente deseas salir del juego? S/N: ";
            cin >> opcSalir;
            while (opcSalir != 'S' && opcSalir != 's' && opcSalir != 'N' && opcSalir != 'n')
            {
                system("clear");
                dibujarLogo();
                cout << YELLOW "------------------------------------------------------------------------------" << endl;
                cout << "Opcion incorrecta!\n¿Realmente deseas salir del juego? S/N: ";
                cin >> opcSalir;
            }
            if (opcSalir == 's' || opcSalir == 'S')
            {
                system("clear");
                cout << "SALIENDO...\n";
                return 0;
            }
            break;
        default:
            system("clear");
            dibujarLogo();
            cout << YELLOW "------------------------------------------------------------------------------" << endl;
            cout << "      Ingresaste una opcion incorrecta!" << endl << "      Presione una tecla para volver al menu...";
            cin >> def;
            break;
        }
    }


    return 0;
}
