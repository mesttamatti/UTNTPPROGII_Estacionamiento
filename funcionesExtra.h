#ifndef FUNCIONESEXTRA_H_INCLUDED
#define FUNCIONESEXTRA_H_INCLUDED
//1
#include"ArchivoEmpleado.h"
#include"Empleado.h"
//2
#include"ArchivoMovimientos.h"
#include"Movimiento.h"
//3
#include"ArchivoCliente.h"
#include"Cliente.h"
//4
#include"ArchivoReserva.h"
#include"Reserva.h"
//5
#include"ArchivoEstacionamiento.h"
#include"Estacionamiento.h"


Empleado* cargarArchivoEmpleado(){
ArchivoEmpleado archivoObj;
Empleado reg;
Empleado *vectorAcargar;

FILE* p;
        p = fopen("Empleado.dat", "rb");
        if (p == NULL) return vectorAcargar;

int cantReg = archivoObj.contarRegistros();


vectorAcargar = new Empleado[cantReg];
if(vectorAcargar==NULL){
            cout<<"Error de asignaci�n de memoria"<<endl;
            return vectorAcargar;
            }

for(int i=0;i<cantReg;i++){
fseek(p, sizeof(reg) * i, 0);
fread(&vectorAcargar[i], sizeof reg, 1, p);
}

fclose(p);
return vectorAcargar; }

Movimiento* cargarArchivoMovimiento(){
ArchivoMovimientos archivoObj;
Movimiento reg;
Movimiento *vectorAcargar;

FILE* p;
        p = fopen("Movimientos.dat", "rb");
        if (p == NULL) {
            cout<<"Error de archivo"<<endl;
            system("pause");
            system("cls");
                return vectorAcargar;}

int cantReg = archivoObj.contarRegistros();


vectorAcargar = new Movimiento[cantReg];
if(vectorAcargar==NULL){
            cout<<"Error de asignaci�n de memoria"<<endl;
            system("pause");
            system("cls");
            return vectorAcargar;
            }

for(int i=0;i<cantReg;i++){
fseek(p, sizeof(reg) * i, 0);
fread(&vectorAcargar[i], sizeof reg, 1, p);
}

fclose(p);
return vectorAcargar; }


Cliente* cargarArchivoCliente(){
ArchivoCliente archivoObj;
Cliente reg;
Cliente *vectorAcargar;

FILE* p;
        p = fopen("Cliente.dat", "rb");
        if (p == NULL) return vectorAcargar;

int cantReg = archivoObj.contarRegistros();


vectorAcargar = new Cliente[cantReg];
if(vectorAcargar==NULL){
            cout<<"Error de asignacion de memoria"<<endl;
            return vectorAcargar;
            }

for(int i=0;i<cantReg;i++){
fseek(p, sizeof(reg) * i, 0);
fread(&vectorAcargar[i], sizeof reg, 1, p);
}

fclose(p);
return vectorAcargar; }

Reserva* cargarArchivoReserva(){
ArchivoReserva archivoObj;
Reserva reg;
Reserva *vectorAcargar;

FILE* p;
        p = fopen("Reserva.dat", "rb");
        if (p == NULL) return vectorAcargar;

int cantReg = archivoObj.contarRegistros();


vectorAcargar = new Reserva[cantReg];
if(vectorAcargar==NULL){
            cout<<"Error de asignacion de memoria"<<endl;
            return vectorAcargar;
            }

for(int i=0;i<cantReg;i++){
fseek(p, sizeof(reg) * i, 0);
fread(&vectorAcargar[i], sizeof reg, 1, p);
}

fclose(p);
return vectorAcargar; }


Estacionamiento* cargarArchivoEstacionamiento(){
ArchivoEstacionamiento archivoObj;
Estacionamiento reg;
Estacionamiento *vectorAcargar;

FILE* p;
        p = fopen("Estacionamiento.dat", "rb");
        if (p == NULL) return vectorAcargar;

int cantReg = archivoObj.contarRegistros();


vectorAcargar = new Estacionamiento[cantReg];
if(vectorAcargar==NULL){
            cout<<"Error de asignacion de memoria"<<endl;
            return vectorAcargar;
            }

for(int i=0;i<cantReg;i++){
fseek(p, sizeof(reg) * i, 0);
fread(&vectorAcargar[i], sizeof reg, 1, p);
}

fclose(p);
return vectorAcargar; }


#endif // FUNCIONESEXTRA_H_INCLUDED
