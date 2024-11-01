#ifndef ARCHIVOMOVIMIENTOS_H_INCLUDED
#define ARCHIVOMOVIMIENTOS_H_INCLUDED

#include"Movimiento.h"
#include"funcionesExtra.h"



class ArchivoMovimientos{
private:
    char nombre[30];

public:
    ArchivoMovimientos() {
        strcpy(nombre, "Movimientos.dat");
    }

    bool escribirRegistro(Movimiento reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) {
            cout<<"Error de archivo"<<endl;
            system("pause");
            system("cls");
                return false;}
        bool escribio = fwrite(&reg, sizeof reg, 1, p);
        fclose(p);
        return escribio;
    }

    Movimiento leerRegistro(int pos) {
        Movimiento reg;
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) {
            cout<<"Error de archivo"<<endl;
            system("pause");
            system("cls");
        return reg;}
        fseek(p, sizeof(Movimiento) * pos, 0);
        fread(&reg, sizeof reg, 1, p);
        fclose(p);
        return reg;
    }

    int contarRegistros() {
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) {
            cout<<"Error de archivo"<<endl;
            system("pause");
            system("cls");
            return -1;}

        fseek(p, 0, 2);
        int tam = ftell(p);
        fclose(p);
        return tam / sizeof(Movimiento);
    }

    bool listarArchivo() {
        Movimiento reg;
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) {
            cout << "No se pudo abrir el archivo." << endl;
            system("pause");
            system("cls");
            return false;
        }
        while (fread(&reg, sizeof reg, 1, p) == 1) {
            reg.Mostrar();
            cout << endl;
        }
        fclose(p);
        return true;
    }

    bool modificarRegistro(Movimiento obj, int nroReg) {
        FILE* p = fopen(nombre, "rb+");
        if (p == NULL) {
             cout<<"Error de archivo"<<endl;
            system("pause");
            system("cls");
            return false;
        }
        fseek(p, nroReg * sizeof(Movimiento), SEEK_SET);
        bool ok = fwrite(&obj, sizeof(Movimiento), 1, p);
        fclose(p);
        return ok;
    }

    void vaciar(){
        FILE *p = fopen(nombre, "wb");
        if (p == NULL){
                cout<<"Error de archivo"<<endl;
            system("pause");
            system("cls");
                return;}
        fclose(p);
    }

     bool actualizarArchivo(Movimiento reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) {
            cout<<"Error de archivo"<<endl;
            system("pause");
            system("cls");
            return false;}

        int cantReg = contarRegistros();
        Movimiento *archivoCargado;
        archivoCargado = new Movimiento[cantReg];

        if(archivoCargado==NULL){
            cout<<"Error de asignación de memoria"<<endl;
            system("pause");
            system("cls");
            return false;
            }
        archivoCargado=cargarArchivoEnMemoria();
        vaciar();

        escribirRegistro(reg);
        cantReg= (cantReg<=14) ? cantReg : 14; //verificar si cantReg es menor o igual a 14. si es menor o igual se puede escribir todos, sino quedaran los 14 primeros
        for(int r=0;r<cantReg;r++){
        escribirRegistro(archivoCargado[r]);
        }

        fclose(p);
        delete archivoCargado;
        return true;
    }


};


#endif // ARCHIVOMOVIMIENTOS_H_INCLUDED
