#include <iostream>
#include <ctime>
#include "funciones.h"
#include <string>
using namespace std;

int main()
{
    srand(time(0));
    int opcion, acuMaximoGanador = 0, acuPuntosGanadorPartida;
    char opcSalir;
    string nombreMaximoGanador, ganadorPartida;
    while (true)
    {
        system("cls");
        menuPrincipal(opcion);
        switch (opcion)
        {
        case 1:
            system("cls");
            menuJugar(acuPuntosGanadorPartida, ganadorPartida);
            calcularMaximoGanador(ganadorPartida, acuPuntosGanadorPartida, nombreMaximoGanador, acuMaximoGanador);
            break;
        case 2:
            system("cls");
            mostrarEstadisticas(nombreMaximoGanador, acuMaximoGanador);
            break;
        case 3:
            system("cls");
            mostrarCreditos();
            break;
        case 0:
            system("cls");
            dibujarLogo();
            cout << YELLOW "------------------------------------------------------------------------------" << endl;
            cout << "¿Realmente deseas salir del juego? S/N: ";
            cin >> opcSalir;
            while (opcSalir != 'S' && opcSalir != 's' && opcSalir != 'N' && opcSalir != 'n')
            {
                system("cls");
                dibujarLogo();
                cout << YELLOW "------------------------------------------------------------------------------" << endl;
                cout << "Opcion incorrecta!\n¿Realmente deseas salir del juego? S/N: ";
                cin >> opcSalir;
            }
            if (opcSalir == 's' || opcSalir == 'S')
            {
                system("cls");
                cout << "SALIENDO...\n";
                return 0;
            }
            break;
        default:
            system("cls");
            dibujarLogo();
            cout << YELLOW "------------------------------------------------------------------------------" << endl;
            cout << "      Ingresaste una opcion incorrecta!" << endl ;
            system("pause");
            break;
        }
    }


    return 0;
}
