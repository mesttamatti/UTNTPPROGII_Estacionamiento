#pragma once
#include "Fecha.h"

class servicioReserva{
private:

};

#pragma once
#include "Fecha.h"

class Reserva{
private:
    int _IDReservas, _IDCliente, _IDEstacionamiento, _Dias;
    Fecha _Ingreso;
    float _Importe;
    bool _Estado;

public:
    Reserva();
    Reserva (int IDReservas, int IDClientes, int IDEstacionamiento, int Dias, Fecha Ingreso, float Importe, bool Estado);
    int getIDReservas();
    int getIDClientes();
    int getIDEstacionamiento();
    int getDias();
    Fecha getFechaIngreso();
    float getImporte();
    bool getEstado();
    void setIDReservas(int IDReservas);
    void setIDClientes(int IDClientes);
    void setIDEstacionamiento(int IDEstacionamiento);
    void setDias(int Dias);
    void setFechaI(Fecha Ingreso);
    void setImporte(float Importe);
    void setEstado (bool Estado);

    std::string toCSV();
};


