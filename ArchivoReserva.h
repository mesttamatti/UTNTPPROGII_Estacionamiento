#ifndef ARCHIVORESERVA_H_INCLUDED
#define ARCHIVORESERVA_H_INCLUDED

#pragma once

#include<cstring>

#include"Reserva.h"

class ArchivoReserva {
private:
    char nombre[30];

public:
    ArchivoReserva() {
        strcpy(nombre, "Reserva.dat");
    }

bool escribirRegistro(Reserva reg);
Reserva leerRegistro(int pos);
int contarRegistros();
bool listarArchivo();
bool modificarRegistro(Reserva obj, int nroReg);

bool validarId(int id);
int buscarPorId(int id);


};

    bool ArchivoReserva::escribirRegistro(Reserva reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) return false;
        bool escribio = fwrite(&reg, sizeof reg, 1, p);
        fclose(p);
        return escribio;
    }

    Reserva ArchivoReserva::leerRegistro(int pos) {
        Reserva reg;
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return reg;
        fseek(p, sizeof(Reserva) * pos, 0);
        fread(&reg, sizeof reg, 1, p);
        fclose(p);
        return reg;
    }

    int ArchivoReserva::contarRegistros() {
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return -1;
        fseek(p, 0, 2);
        int tam = ftell(p);
        fclose(p);
        return tam / sizeof(Reserva);
    }

    bool ArchivoReserva::listarArchivo() {
        Reserva reg;
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) {
            cout << "No se pudo abrir el archivo." << endl;
            return false;
        }
        while (fread(&reg, sizeof reg, 1, p) == 1) {
            reg.Mostrar();
            cout << endl;

        }
        fclose(p);
        return true;
    }

    bool ArchivoReserva::modificarRegistro(Reserva obj, int nroReg) {
        FILE* p = fopen(nombre, "rb+");
        if (p == NULL) {
            return false;
        }
        fseek(p, nroReg * sizeof(Reserva), SEEK_SET);
        bool ok = fwrite(&obj, sizeof(Reserva), 1, p);
        fclose(p);
        return ok;
    }

bool ArchivoReserva::validarId(int id){
    Reserva obj;
    FILE *p;
    p=fopen("Reserva.dat","rb");
    if(p==nullptr){
        return -2;
    }
    int pos=0;
    while(fread(&obj, sizeof obj, 1, p)==1){
        if(obj.getID()==id && obj.getEstado()==true){
            fclose(p);
            return true;
        }
        pos++;
    }
    fclose(p);
    return false;
}

int ArchivoReserva::buscarPorId(int id){
    Reserva obj;
    FILE *p;
    p=fopen("Reserva.dat","rb");
    if(p==nullptr){
        return -2;
    }
    int pos=0;
    while(fread(&obj, sizeof obj, 1, p)==1){
        if(obj.getID()==id && obj.getEstado()==true){
            fclose(p);
            return pos;
        }
        pos++;
    }
    fclose(p);
    return -1;
}





#endif // ARCHIVORESERVA_H_INCLUDED