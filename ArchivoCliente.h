#ifndef ARCHIVOCLIENTE_H_INCLUDED
#define ARCHIVOCLIENTE_H_INCLUDED

#pragma once

#include<cstring>

#include"Cliente.h"

class ArchivoCliente {
private:
    char nombre[30];

public:
    ArchivoCliente() {
        strcpy(nombre, "Cliente.dat");
    }

bool escribirRegistro(Cliente reg);
Cliente leerRegistro(int pos);
int contarRegistros();
bool listarArchivo();
bool modificarRegistro(Cliente obj, int nroReg);

bool validarId(int id);
int buscarPorId(int id);


};

    bool ArchivoCliente::escribirRegistro(Cliente reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) return false;
        bool escribio = fwrite(&reg, sizeof reg, 1, p);
        fclose(p);
        return escribio;
    }

    Cliente ArchivoCliente::leerRegistro(int pos) {
        Cliente reg;
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return reg;
        fseek(p, sizeof(Cliente) * pos, 0);
        fread(&reg, sizeof reg, 1, p);
        fclose(p);
        return reg;
    }

    int ArchivoCliente::contarRegistros() {
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return -1;
        fseek(p, 0, 2);
        int tam = ftell(p);
        fclose(p);
        return tam / sizeof(Cliente);
    }

    bool ArchivoCliente::listarArchivo() {
        Cliente reg;
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

    bool ArchivoCliente::modificarRegistro(Cliente obj, int nroReg) {
        FILE* p = fopen(nombre, "rb+");
        if (p == NULL) {
            return false;
        }
        fseek(p, nroReg * sizeof(Cliente), SEEK_SET);
        bool ok = fwrite(&obj, sizeof(Cliente), 1, p);
        fclose(p);
        return ok;
    }

bool ArchivoCliente::validarId(int id){
    Cliente obj;
    FILE *p;
    p=fopen("Cliente.dat","rb");
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

int ArchivoCliente::buscarPorId(int id){
    Cliente obj;
    FILE *p;
    p=fopen("Cliente.dat","rb");
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





#endif // ARCHIVOCLIENTE_H_INCLUDED