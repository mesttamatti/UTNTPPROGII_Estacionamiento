#ifndef FUNCIONESEXTRA_H_INCLUDED
#define FUNCIONESEXTRA_H_INCLUDED

#include"ArchivoEmpleado.h"
#include"Empleado.h"

#include"ArchivoMovimientos.h"
#include"Movimiento.h"


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
            cout<<"Error de asignación de memoria"<<endl;
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
            cout<<"Error de asignación de memoria"<<endl;
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




#endif // FUNCIONESEXTRA_H_INCLUDED
