#ifndef ARCHIVOESTACIONAMIENTO_H_INCLUDED
#define ARCHIVOESTACIONAMIENTO_H_INCLUDED

#pragma once

#include<cstring>

#include"Estacionamiento.h"

class ArchivoEstacionamiento {
private:
    char nombre[30];

public:
    ArchivoEstacionamiento() {
        strcpy(nombre, "Estacionamiento.dat");
    }

bool escribirRegistro(Estacionamiento reg);
Estacionamiento leerRegistro(int pos);
int contarRegistros();
bool listarArchivo();
bool modificarRegistro(Estacionamiento obj, int nroReg);

bool validarId(int id);
int buscarPorId(int id);


};

    bool ArchivoEstacionamiento::escribirRegistro(Estacionamiento reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) return false;
        bool escribio = fwrite(&reg, sizeof reg, 1, p);
        fclose(p);
        return escribio;
    }

    Estacionamiento ArchivoEstacionamiento::leerRegistro(int pos) {
        Estacionamiento reg;
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return reg;
        fseek(p, sizeof(Estacionamiento) * pos, 0);
        fread(&reg, sizeof reg, 1, p);
        fclose(p);
        return reg;
    }

    int ArchivoEstacionamiento::contarRegistros() {
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return -1;
        fseek(p, 0, 2);
        int tam = ftell(p);
        fclose(p);
        return tam / sizeof(Estacionamiento);
    }

    bool ArchivoEstacionamiento::listarArchivo() {
        Estacionamiento reg;
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

    bool ArchivoEstacionamiento::modificarRegistro(Estacionamiento obj, int nroReg) {
        FILE* p = fopen(nombre, "rb+");
        if (p == NULL) {
            return false;
        }
        fseek(p, nroReg * sizeof(Estacionamiento), SEEK_SET);
        bool ok = fwrite(&obj, sizeof(Estacionamiento), 1, p);
        fclose(p);
        return ok;
    }

bool ArchivoEstacionamiento::validarId(int id){
    Estacionamiento obj;
    FILE *p;
    p=fopen("Estacionamiento.dat","rb");
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

int ArchivoEstacionamiento::buscarPorId(int id){
    Estacionamiento obj;
    FILE *p;
    p=fopen("Estacionamiento.dat","rb");
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





#endif // ARCHIVOESTACIONAMIENTO_H_INCLUDED