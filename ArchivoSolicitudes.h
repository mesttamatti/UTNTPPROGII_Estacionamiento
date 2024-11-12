

#pragma once

#include<cstring>

#include"Solicitudes.h"

class ArchivoSolicitudes {
private:
    char nombre[30];

public:
    ArchivoSolicitudes() {
        strcpy(nombre, "Solicitudes.dat");
    }

bool escribirRegistro(Solicitudes reg);
Reserva leerRegistro(int pos);
int contarRegistros();
bool listarArchivo();
bool modificarRegistro(Solicitudes obj, int nroReg);

bool validarId(int id);
int buscarPorId(int id);


};

    bool ArchivoSolicitudes::escribirRegistro(Solicitudes reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) return false;
        bool escribio = fwrite(&reg, sizeof reg, 1, p);
        fclose(p);
        return escribio;
    }

    Solicitudes ArchivoSolicitudes::leerRegistro(int pos) {
        Solicitudes reg;
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return reg;
        fseek(p, sizeof(Solicitudes) * pos, 0);
        fread(&reg, sizeof reg, 1, p);
        fclose(p);
        return reg;
    }

    int ArchivoSolicitudes::contarRegistros() {
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return -1;
        fseek(p, 0, 2);
        int tam = ftell(p);
        fclose(p);
        return tam / sizeof(Solicitudes);
    }

    bool ArchivoSolicitudes::listarArchivo() {
        Solicitudes reg;
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

    bool ArchivoSolicitudes::modificarRegistro(Solicitudes obj, int nroReg) {
        FILE* p = fopen(nombre, "rb+");
        if (p == NULL) {
            return false;
        }
        fseek(p, nroReg * sizeof(Solicitudes), SEEK_SET);
        bool ok = fwrite(&obj, sizeof(Solicitudes), 1, p);
        fclose(p);
        return ok;
    }

bool ArchivoSolicitudes::validarId(int id){
    Solicitudes obj;
    FILE *p;
    p=fopen("Solicitudes.dat","rb");
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

int ArchivoSolicitudes::buscarPorId(int id){
    Solicitudes obj;
    FILE *p;
    p=fopen("Solicitudes.dat","rb");
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

bool ArchivoSolicitudes::aceptarReserva(solicitudes reg, int idActivo){
  Reserva nueva;
  ArchivoReserva archiRes;
  Cliente clienteSolic;
  ArchivoCliente archiCli;
  

  if(archiCli.validarID(reg.getIDCliente())){
    nueva.setIDCliente(reg.getIDCliente());
  } else {
    cout << "AGREGANDO CLIENTE NUEVO AL DIRECTORIO." << endl;
clienteSolic.setTipo(null);//agregar tipo cliente a Solicitud
    clienteSolic.setNombre(reg.getNombre());
    clienteSolic.setApellido(reg.getApellido());
    clienteSolic.setMail(reg.getMail());
    clienteSolic.setTelefono(null);
    if(archiCli.grabarRegistro(clienteSolic)){cout << "AGREGADO. SOLICITAR EL TELEFONO CUANDO SE PRESENTE." << endl;}
    
    nueva.setIDCliente(reg.getIDCliente());
  }
  
  nueva.setIDEstacionamiento(reg.getIDEstacionamiento());
  nueva.setDias(reg.getDias());
  nueva.setImporte(reg.getImporte());
  nueva.setFechaIngreso(reg.getFechaIngreso());
  nueva.setIDEmpleado(idActivo);
  
  archiRes.escribirRegistro(nueva);
  cout << "RESERVA ACEPTADA. ENVIANDO MAIL DE CONFIRMACION A: " <<nueva.getMail()<<endl;
}

bool ArchivoSolicitudes::seleccionSolicitudes(int idActivo) {
        Solicitudes reg;
  ArchivoSolicitudes archi;
  
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) {
            cout << "No se pudo abrir el archivo." << endl;
            return false;
        }
  int opc;
        while (fread(&reg, sizeof reg, 1, p) == 1&& reg.getEstado()==true) {
            reg.Mostrar();
            cout << endl;
          
          cout << "ACEPTAR RESERVA? ACEPTAR (1), RECHAZAR(2), SIGUIENTE (3), SALIR(0): " << endl;
cin>>opc;
          switch(opc){
            case 1:
            aceptarReserva(reg, idActivo);
            break;

            case 2:
            cout << "RECHAZADA, ELIMINANDO." << endl;
            reg.setEstado(falso);
            archi.modificarRegistro(reg);
            break;

            case 3:
            cout << "CONTINUAR..." << endl;
            break;

            case 0:
            return true;
            break;

            case :
           cout << "INVALIDO." << endl;
            cout << "ACEPTAR RESERVA? ACEPTAR (1), RECHAZAR(2), SIGUIENTE (3), SALIR(0): " << endl;
cin>>opc;
            break;
          }
           cout << "SIGUIENTE..." << endl;
          system("pause");
          system("cls");
        }
        fclose(p);
        return true;
    }

