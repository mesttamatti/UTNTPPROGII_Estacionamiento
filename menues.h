#ifndef MENUES_H_INCLUDED
#define MENUES_H_INCLUDED
#pragma once

#include"ArchivoEmpleado.h"
#include"funcionesMenuGerente.h"
#include"funcionesMenuEmpleado.h"

void menuPrincipal();
void menuCajero(int id, int tipo);
void menuGerente(int id, int tipo);
void menuAdmin();

void MenuPrincipal() {
ArchivoEmpleado reg;
int iduser;
int tipoMenuEmpleado;
    while(true){
        int opc;

        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU PRINCIPAL"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"CONSULTAR POR ESTACIONAMIENTO DISPONIBLE"<<endl;
        cout<<"1 - POR TIPO DE VEHICULO"<<endl;
        cout<<"2 - POR NUMERO DE LUGAR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"3 - LOGIN PARA EMPLEADOS"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");

        switch(opc){
            case 1:
                char tipo;
                cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"MENU PRINCIPAL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"CONSULTAR POR ESTACIONAMIENTO DISPONIBLE"<<endl;
                cout<<"POR TIPO DE VEHICULO"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"INGRESE SU TIPO DE VEHICULO (LETRA):"<<endl;
                cout<<"A: CAMION/COLECTIVO. B: AUTO COMUN/FAMILIAR. C: MOTOCICLETA"<<endl;
                cin>>tipo;
                cout<<endl;
                system("cls");
                break;

            case 2:
                int lugar;
                cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"MENU PRINCIPAL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"CONSULTAR POR ESTACIONAMIENTO DISPONIBLE"<<endl;
                cout<<"POR NUMERO DE LUGAR"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"INGRESE EL NUMERO DE LUGAR DE ESTACIONAMIENTO:"; cin>>lugar;
                cout<<endl;
                system("cls");
                break;

            case 3:

                cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"MENU PRINCIPAL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"LOGIN PARA EMPLEADOS"<<endl;
                cout<<"DEBERÁ CONTAR CON REGISTRACION PREVIA EN EL SISTEMA"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"INGRESE EL NUMERO DE ID DE EMPLEADO:"; cin>>iduser;
                cout<<endl;
                tipoMenuEmpleado = reg.login(iduser);
                system("pause");

                if(tipoMenuEmpleado ==1){menuCajero(iduser, tipoMenuEmpleado);} else if(tipoMenuEmpleado == 2){menuGerente(iduser, tipoMenuEmpleado);};
                system("cls");
                break;

                case 9:
                cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"MENU SOPORTE"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"LOGIN PARA ADMIN"<<endl;
                cin>>iduser;
                if(iduser==27952){  system("cls"); menuAdmin();}
                cout<<endl;
                system("cls");
                system("pause");
                break;

            case 0:

                return;
                break;

            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                system("pause");
                break;
        }
        system("pause");
    }
}



void menuCajero(int id, int tipo) {
    int usuarioActivoId = id;
    int usuarioActivoTipo = tipo;
        while(true){
        int opc;

        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU CAJERO"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"1 - HACER RESERVA"<<endl;
        cout<<"2 - CANCELAR RESERVA"<<endl;
        cout<<"3 - SOLICITUDES DE RESERVA"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");

        switch (opc) {
            case 1:
                hacerReserva(usuarioActivoId,usuarioActivoTipo);
                break;
            case 2:
                cancelarReserva(usuarioActivoId,usuarioActivoTipo);
                break;
            case 3:
                solicitudes(usuarioActivoId,usuarioActivoTipo);
                break;
                case 0:
                return;
                break;

            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                system("pause");
                break;
        }
    }
}

void menuGerente(int id, int tipo) {
    int usuarioActivoId = id;
    int usuarioActivoTipo = tipo;

     while(true){
        int opc;

        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU GERENCIA"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"1 - ULTIMOS 15 MOVIMIENTOS EN SISTEMA"<<endl;
        cout<<"2 - CAMBIAR PRECIO DE ESTACIONAMIENTO"<<endl;
        cout<<"3 - CLAUSURAR LUGAR"<<endl;
        cout<<"4 - DAR DE ALTA UN LUGAR"<<endl;
        cout<<"5 - DAR DE ALTA UN EMPLEADO"<<endl;
        cout<<"6 - DAR DE BAJA UN EMPLEADO"<<endl;
        cout<<"7 - CONSULTAS"<<endl;
        cout<<"8 - LISTADOS"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");

        switch (opc) {
            case 1:
                ultimosMovimientos();
                break;
            case 2:
                cambiarPrecio(usuarioActivoId,usuarioActivoTipo);
                break;
            case 3:
                clausurar(usuarioActivoId,usuarioActivoTipo);
                break;
            case 4:
                altaEstacionamiento(usuarioActivoId,usuarioActivoTipo);
                break;
            case 5:
                crearEmpleado(usuarioActivoId, usuarioActivoTipo);

                break;
            case 6:
               bajaEmpleado(usuarioActivoId, usuarioActivoTipo);
                break;

            case 0:
                return;
                break;

            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                system("pause");
                break;

        }
    }


}

void menuAdmin(){
/*
construir y guardar registros gerentes
*/
Empleado admin;
ArchivoEmpleado master;
cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
cout<<"----------------------------------------"<<endl;
cout<<"MENU SOPORTE"<<endl;
cout<<"----------------------------------------"<<endl;
cout<<"CREAR EMPLEADO GERENTE: "<<endl;
admin.cargar();
master.escribirRegistro(admin);
system("cls");
admin.mostrar();
system("pause");
system("cls");
return;
}

#endif // MENUES_H_INCLUDED
