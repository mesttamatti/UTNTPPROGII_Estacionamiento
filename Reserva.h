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

    void setIDCliente(int cliente){_IDCliente = cliente;}
    void setIDEmpleado(int empleado){_IDEmpleado = empleado;}
    void setIDEstacionamiento(int estacionamiento){_IDEstacionamiento = estacionamiento;}
    void setDias(int dias){_Dias = dias;}
    void setFechaI(Fecha ingreso){_Ingreso= ingreso;}
    void setImporte(float importe){_Importe= importe;}
    void setEstado (bool estado){_Estado= estado;}

    void cargar(int empleado, int estacionamiento){
        _IDReserva++;
        _IDEmpleado= empleado;
        _IDEstacionamiento = estacionamiento;
        cout<<"NUMERO DE IDENTIFICACION DE CLIENTE: "; cin>>_IDCliente;
        cout<<"FECHA DE INGRESO: "; _Ingreso.cargar();
        cout<<"CANTIDAD DIAS ABONADOS: "; cin>>_Dias;
        cout<<"IMPORTE TOTAL: "; cin>>_Importe;
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


