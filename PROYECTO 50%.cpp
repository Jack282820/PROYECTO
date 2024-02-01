#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#define N 10
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

void cambio(char a[]);
void ingresar();
void vacio();
void adopcion();;
void menu();
void limpia();
void adopcion();
void listar();
void eliminar();

struct perro
{
    char nombre[35];
    char codigo[15];
    char fecha[30];
    char raza[30];
    int edad;
    int lleno;
};

perro pe[N];

int main()
{
    system("mode con: cols=80 lines=25");
    system("COLOR 70");
    cout << "     F U N D A C I O N  D E J A N D O  H U E L L A S    ";
    vacio();
    menu();
    getch();
    return 0;
}

void menu()
{
    char op, op2;
    do
    {
        cout << "MENU PRINCIPAL";
        cout << "(1) Perros";
        cout << "(2) Estado";
        cout << "(3) Cerrar";
        cout << "Ingrese opcion: ";
        cin >> op;

        if (op != '1' && op != '2' && op != '3')
        {
            cout << "Error al ingresar valores. Presione una tecla para volver a ingresar..";
            getch();
            cout << "                                                                       ";
            cout << "                                                                       ";
        }

    } while (op != '1' && op != '2' && op != '3');

    if (op == '1')
    {
        limpia();
        do
        {
            
            cout << "PERROS";
          
            cout << "(1) Agregar";
            
            cout << "(2) Eliminar";
            
            cout << "(3) Listar";
            
            cout << "Ingrese opcion: ";
            cin >> op2;

            if (op2 != '1' && op2 != '2' && op2 != '3')
            {
               
                cout << "Error al ingresar valores. Presione una tecla para volver a ingresar..";
                getch();
                cout << "                                                                       ";
                cout << "                                                                       ";
            }

        } while (op2 != '1' && op2 != '2' && op2 != '3');

        if (op2 == '1')
            ingresar();
        if (op2 == '2')
            eliminar();
        if (op2 == '3')
            listar();
    }

    if (op == '2')
    {
        int a = 0;
        for (int i = 0; i < 10 && a == 0; i++)
        {
            if (pe[i].lleno == 1)
                a = 1;
        }
        if (a == 0)
        {
            CursorOff();
            cout << "No hay perros. Primero se debe ingresar un perro.";
            cout << "Presione una tecla para continuar..";
            getch();
            cout << "                                                       ";
            cout << "                                                                    ";
            cout << "                                       ";
            menu();
        }
        else
            adopcion();
    }

    if (op == '3')
        exit(0);
}
