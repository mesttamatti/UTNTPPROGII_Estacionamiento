#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#pragma once

#include"Persona.h"

class Empleado: public Persona{
private:
int _jerarquia; // 1 para Cajero, 2 para Gerente
char _password[15];

public:
  int getJerarquia(){return _jerarquia;}
  void setJerarquia(int tipo){_jerarquia=tipo;
  if(_jerarquia!=1||_jerarquia!=2){
         do{cout<<"INGRESE UN TIPO DE JERARQUIA VALIDA"<<endl;
            cout<<"TIPO DE JERARQUIA (1: CAJERO, 2: GERENTE): ";cin>>_jerarquia;
            cout<<endl;
          } while(_jerarquia !=1&&_jerarquia !=2);
            }}

  const char *getPassword() { return _password; }
  void setPassword(char *pass) { strcpy(_password, pass); }

  void mostrar(){
      Persona::Mostrar();
        cout<<"JERARQUIA: "<<_jerarquia;
        if(_jerarquia==1){cout<<" CAJERO"<<endl;} else if(_jerarquia==2){cout<<" GERENTE "<<endl;}}


void cargar(){
Persona::cargar();
  cout<<"TIPO DE JERARQUIA (1: CAJERO, 2: GERENTE): ";cin>>_jerarquia;
  cout<<endl;

  if(_jerarquia!=1 &&_jerarquia!=2){
         while(_jerarquia !=1&&_jerarquia !=2){cout<<"INGRESE UN TIPO DE JERARQUIA VALIDA"<<endl;
            cout<<"TIPO DE JERARQUIA (1: CAJERO, 2: GERENTE): ";cin>>_jerarquia;
            cout<<endl;
          }
            }

  cout<<"CONTRASENIA DE USUARIO: "; cin>>_password;
}



};


#endif // EMPLEADO_H_INCLUDED
