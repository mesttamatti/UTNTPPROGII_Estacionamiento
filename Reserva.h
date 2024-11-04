#ifndef RESERVA_H_INCLUDED
#define RESERVA_H_INCLUDED
#pragma once
#include "Fecha.h"

int Reserva::_IDReserva =0; //inicializacion para que empiece a contar

class Reserva{
private:
static int _IDReserva;
    int _IDEmpleado;
    int _IDCliente;
    int _IDEstacionamiento;
    int _Dias;
    Fecha _Ingreso;
    float _Importe;
    bool _Estado;

public:
    Reserva();

    int getIDReserva(){return _IDReserva;}
    int getIDCliente(){return _IDCliente;}
    int getIDEmpleado(){return _IDEmpleado;}
    int getIDEstacionamiento(){return _IDEstacionamiento;}
    int getDias(){return _Dias;}
    Fecha getFechaIngreso(){return _Ingreso;}
    float getImporte(){return _Importe;}
    bool getEstado(){return _Estado;}

    void setIDCliente(int cliente){
        ArchivoEstacionamiento archivCli;
        while(archivCli.validarId(cliente)==false){
            cout<<"ID NO VALIDO. REINTENTE: ";
            cin>>cliente;
            cout<<endl;
        }
        _IDCliente = cliente;}

    void setIDEstacionamiento(int estacionamiento){
        ArchivoEstacionamiento archivEst;
        while(archivEst.validarId(estacionamiento)==false){
            cout<<"ID NO VALIDO. REINTENTE: ";
            cin>>estacionamiento;
            cout<<endl;
        }_IDEstacionamiento = estacionamiento;}

    void setDias(int dias){_Dias = dias;}
    void setFechaI(Fecha ingreso){_Ingreso= ingreso;}
    void setEstado (bool estado){_Estado= estado;}

    void cargar(int empleado, int estacionamiento){
        ArchivoEstacionamiento archivEst;
        ArchivoEstacionamiento archivCli;
        
        _IDReserva++;
        _IDEmpleado= empleado;
       
        while(archivEst.validarId(estacionamiento)==false){
            cout<<"ID NO VALIDO. REINTENTE: ";
            cin>>estacionamiento;
            cout<<endl;
        }
        _IDEstacionamiento = estacionamiento;
        
        cout<<"NUMERO DE IDENTIFICACION DE CLIENTE: "; cin>>_IDCliente;
        while(archivCli.validarId(_IDCliente)==false){
            cout<<"ID NO VALIDO. REINTENTE: ";
            cin>>_IDCliente;
            cout<<endl;
        }
        
        cout<<"FECHA DE INGRESO: "; _Ingreso.cargar();
        cout<<"CANTIDAD DIAS ABONADOS: "; cin>>_Dias;

        //abrir arch estacionamiento y traer valor por dia, multiplicarlo
        Estacionamiento reg;
        
        _Importe= reg.getPrecio(archivEst.leerRegistro(archivEst.buscarporID(estacionamiento)));
        _Importe=_Importe*_Dias;
        cout<<"IMPORTE TOTAL: "; _Importe;
        
        _estado=true;
    }

void mostrar(){
    cout<<"NUMERO DE IDENTIFICACION DE RESERVA: "<<_IDReserva<<endl;
    cout<<"EMPLEADO #: "<<_IDEmpleado<<" FECHA: "<<_Ingreso.mostrar();
    cout<<"NUMERO DE ESTACIONAMIENTO: "<<_IDEstacionamiento<<endl;
    cout<<"NUMERO DE CLIENTE: "<<_IDCliente<<endl;
    cout<<"CANTIDAD DIAS ABONADOS: ";<<_Dias<<endl;
    cout<<"IMPORTE TOTAL: "; cin>>_Importe;
}

    std::string toCSV();
};

#endif // RESERVA_H_INCLUDED
