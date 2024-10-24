#pragma once
#include "Fecha.h"

class servicioReserva{
private:

};


#pragma once
#include "Fecha.h"

class servicioReserva{
private:
    int _Lugar, _Dias;
    char _Tipo;
    Fecha _Ingreso;
    Fecha _Egreso;
    float _Importe;
    bool _Estado;

public:
    ServicioReserva();
    servicioReserva(int Lugar, int Dias, char Tipo, Fecha Ingreso, Fecha Egreso, float Importe, bool Estado);
    int getLugar();
    int getDias();
    Fecha getFechaIngreso();
    Fecha getFechaEgreso();
    float getImporte();
    bool getEstado();
    void setLugar(int Lugar);
    void setTipo(char Tipo);
    void setFechaI(Fecha Ingreso);
    void setFechaE(Fecha Egreso);
    void setImporte(float Importe);
    void setEstado(bool Estado);
    void DardeBaja();
    void AumentarDias(int Dias);

    std::string toCSV();
};
