#ifndef ARCHIVOEMPLEADO_H_INCLUDED
#define ARCHIVOEMPLEADO_H_INCLUDED

#pragma once

#include<cstring>

#include"Empleado.h"

class ArchivoEmpleado {
private:
    char nombre[30];

public:
    ArchivoEmpleado() {
        strcpy(nombre, "Empleado.dat");
    }

bool escribirRegistro(Empleado reg);
Empleado leerRegistro(int pos);
int contarRegistros();
bool listarArchivo(int jerarquia);
bool modificarRegistro(Empleado obj, int nroReg);

bool validarId(int id);
int buscarPorId(int id);
int login(int id);

};

    bool ArchivoEmpleado::escribirRegistro(Empleado reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) return false;
        bool escribio = fwrite(&reg, sizeof reg, 1, p);
        fclose(p);
        return escribio;
    }

    Empleado ArchivoEmpleado::leerRegistro(int pos) {
        Empleado reg;
        //reg.setNumeroPasajero(-1);
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return reg;
        fseek(p, sizeof(Empleado) * pos, 0);
        fread(&reg, sizeof reg, 1, p);
        fclose(p);
        return reg;
    }

    int ArchivoEmpleado::contarRegistros() {
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return -1;
        fseek(p, 0, 2);
        int tam = ftell(p);
        fclose(p);
        return tam / sizeof(Empleado);
    }

    bool ArchivoEmpleado::listarArchivo(int jerarquia) {
        Empleado reg;
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) {
            cout << "No se pudo abrir el archivo." << endl;
            return false;
        }
        while (fread(&reg, sizeof reg, 1, p) == 1) {
            if(reg.getJerarquia()==jerarquia){
            reg.Mostrar();
            cout << endl;}

        }
        fclose(p);
        return true;
    }

    bool ArchivoEmpleado::modificarRegistro(Empleado obj, int nroReg) {
        FILE* p = fopen(nombre, "rb+");
        if (p == NULL) {
            return false;
        }
        fseek(p, nroReg * sizeof(Empleado), SEEK_SET);
        bool ok = fwrite(&obj, sizeof(Empleado), 1, p);
        fclose(p);
        return ok;
    }

bool ArchivoEmpleado::validarId(int id){
    Empleado obj;
    FILE *p;
    p=fopen("Empleado.dat","rb");
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

int ArchivoEmpleado::buscarPorId(int id){
    Empleado obj;
    FILE *p;
    p=fopen("Empleado.dat","rb");
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

int ArchivoEmpleado::login(int id){
    Empleado obj;
    FILE *p;
    p=fopen("Empleado.dat","rb");
    if(p==nullptr){
        return -1;
    }

    string ingreso;
    cout<<"INGRESE PASSWORD "<<endl;
    cout<<"(RESPETE MAYUSCULAS Y MINUSCULAS): "<<endl;
    cin>>ingreso;
    system("cls");

    bool idCoincidente=0;
    int pos=0;

    while(fread(&obj, sizeof obj, 1, p)==1){
        if(obj.getID()==id && obj.getEstado()== true){
            fclose(p);
            idCoincidente =1;
        }
        pos++;
    }
    fclose(p);

    if(idCoincidente==1){
        if(strcmp(obj.getPassword(), ingreso.c_str())==0){
            return obj.getJerarquia();
    } else{
        bool continuar;
        cout<<"PASSWORD NO VALIDO. REINTENTAR? (1: SI -- 0: NO): "; cin>>continuar;
system("pause");

        while(continuar){
            cout<<"INGRESE PASSWORD "<<endl;
            cout<<"(RESPETE MAYUSCULAS Y MINUSCULAS): "<<endl;
            cin>>ingreso;
            system("cls");

        if(strcmp(obj.getPassword(), ingreso.c_str())==0){
        return obj.getJerarquia();
    } else {
            cout<<"PASSWORD NO VALIDO. REINTENTAR? (1: SI -- 0: NO): "; cin>>continuar;
            system("pause");
            }
        }
    }
    } else{
        cout<<"NO SE ENCONTRO ID VALIDO EN REGISTROS";
        system("pause");
        system("cls");
        return 0;}
return 0;
}



#endif // ARCHIVOEMPLEADO_H_INCLUDED
