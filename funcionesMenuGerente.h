#ifndef FUNCIONESMENUGERENTE_H_INCLUDED
#define FUNCIONESMENUGERENTE_H_INCLUDED

#include"Movimiento.h"
#include"ArchivoMovimientos.h"

bool ultimosMovimientos();
void cambiarPrecio(int usuarioActivoId, int usuarioActivoTipo);
void clausurar(int usuarioActivoId, int usuarioActivoTipo);
void altaEstacionamiento(int usuarioActivoId, int usuarioActivoTipo);
void crearEmpleado(int usuarioActivoId, int usuarioActivoTipo);
void bajaEmpleado(int usuarioActivoId, int usuarioActivoTipo);



//1
bool ultimosMovimientos(){

ArchivoMovimientos lectura;
return lectura.listarArchivo();
}

//2
void cambiarPrecio(int usuarioActivoId, int usuarioActivoTipo){}

//3
void clausurar(int usuarioActivoId, int usuarioActivoTipo){}

//4
void altaEstacionamiento(int usuarioActivoId, int usuarioActivoTipo){}

//5
void crearEmpleado(int usuarioActivoId, int usuarioActivoTipo){
int activoId = usuarioActivoId;
int activoTipo = usuarioActivoTipo;
Empleado nuevo;
ArchivoEmpleado master;
cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
cout<<"----------------------------------------"<<endl;
cout<<"MENU GERENCIA"<<endl;
cout<<"----------------------------------------"<<endl;
cout<<"CREAR EMPLEADO: "<<endl;
nuevo.cargar();
master.escribirRegistro(nuevo);
system("cls");
nuevo.mostrar();
system("pause");
system("cls");

Movimiento registrar;
int accion = (nuevo.getJerarquia()==1)? 9 : 11;

registrar.Cargar(activoId, activoTipo, accion, nuevo.getID());

ArchivoMovimientos movimientoRegistrar;
bool escribio = movimientoRegistrar.actualizarArchivo(registrar);
while(escribio==false){
    cout<<"NO SE PUDO ESCRIBIR EL MOVIMIENTO"<<endl;
    registrar.Mostrar();
    escribio = movimientoRegistrar.actualizarArchivo(registrar);
    system("pause");
}
return;
}

//6
void bajaEmpleado(int usuarioActivoId, int usuarioActivoTipo){
}










#endif // FUNCIONESMENUGERENTE_H_INCLUDED
