#ifndef LISTADOS_H_INCLUDED
#define LISTADOS_H_INCLUDED

void listadosCliente();
void clientesLista(ArchivoCliente* vectr);
void clientesListaTipo(ArchivoCliente* vectr);
void clientesListaID(ArchivoCliente* vectr);

void listadosEmpleado();
    void empleadoLista(ArchivoEmpleado* vectr);
    void empleadoListaJerarquia(ArchivoEmpleado* vectr);
    void empleadoListaID(ArchivoEmpleado* vectr);

void listadosReserva();

void menuListado() {
     while(true){
        int opc;

        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU LISTADOS"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"1 - LISTADOS DE CLIENTES"<<endl;
        cout<<"2 - LISTADOS DE EMPLEADOS"<<endl;
        cout<<"3 - LISTADOS DE RESERVAS"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");

        switch (opc) {
            case 1:
                listadosCliente();
                break;
            case 2:
                listadosEmpleado();
                break;
            case 3:
                listadosReserva();
                break;

            case 0:
                return;
                break;

            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                system("pause");
                break;

        }
    }


}

void listadosCliente(){
    while(true){
        int opc;

        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU LISTADOS: CLIENTES"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"1 - LISTADOS DE CLIENTES"<<endl;
        cout<<"2 - LISTADOS DE EMPLEADOS"<<endl;
        cout<<"3 - LISTADOS DE RESERVAS"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");

        switch (opc) {
            case 1:
                listadosCliente();
                break;
            case 2:
                listadosEmpleado();
                break;
            case 3:
                listadosReserva();
                break;

            case 0:
                return;
                break;

            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                system("pause");
                break;

        }
    }
}


void listadosEmpleado(){
Empleado* archi;
archi=archi.cargarArchivoEnMemoria();

while(true){
        int opc;
        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU LISTADOS: EMPLEADOS"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"1 - LISTAR ARCHIVO"<<endl;
        cout<<"2 - ORDENAR POR JERARQUIA"<<endl;
        cout<<"3 - ORDENAR POR ID"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");

        switch (opc) {
            case 1:
                empleadoLista(archi);
                break;
            case 2:
                empleadoListaJerarquia(archi);
                break;
            case 3:
                empleadoListaID(archi);
                break;

            case 0:
                return;
                break;

            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                system("pause");
                break;

        }
    }
}

void listadosReserva(){
    while(true){
        int opc;

        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU LISTADOS: RESERVAS"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"1 - LISTAR ARCHIVO"<<endl;
        cout<<"2 - ORDENADO POR ID ESTACIONAMIENTO"<<endl;
        cout<<"3 - ORDENADO POR ID CLIENTE"<<endl;
        cout<<"4 - ORDENADO POR ID EMPLEADO"<<endl;
        cout<<"5 - ORDENADO POR FECHA"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");

        switch (opc) {
            case 1:
                listadosCliente();
                break;
            case 2:
                listadosEmpleado();
                break;
            case 3:
                listadosReserva();
                break;

            case 0:
                return;
                break;

            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                system("pause");
                break;

        }
    }

}


void clientesLista(ArchivoCliente* vectr){
    cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"MENU LISTADOS: CLIENTES"<<endl;
    cout<<"----------------------------------------"<<endl;
 for(int a=0;a<vectr.size();a++){
        vectr[a].mostrar();
        cout<<endl;
    }
    system("pause");
    system("cls");
}

void clientesListaTipo(ArchivoCliente* vectr){
    cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"MENU LISTADOS: CLIENTES"<<endl;
    cout<<"----------------------------------------"<<endl;
    char ingreso;
    cout<<"INDIQUE TIPO DE CLIENTE A LISTAR: "<<endl;
    cout<<"TIPO DE CLIENTES (A: EMPRESA, B: PARTICULAR): ";cin>>ingreso;
          do{
      if(_tipo=="a"||_tipo=="A"){_tipo="A"; } else if(_tipo=="b"||_tipo=="B"){ _tipo="B";} else{
         cout<<"TIPO DE CLIENTE INVALIDO"<<endl;
         cout<<endl;
         cout<<"TIPO DE CLIENTE: "<<endl;
         cout<<"(A: EMPRESA, B: PARTICULAR)";cin>>_tipo;
      }
     } while(_tipo != "A" && _tipo != "B");
    
    cout<<endl;
    system("cls");
    cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
    cout<<"----------------------------------------"<<endl;
if(ingreso=="A"){cout<<"---CLIENTES EMPRESA REGISTRADOS---"<<endl;} else if(ingreso=="B"){cout<<"---CLIENTES PARTICULAR REGISTRADOS---"<<endl;}
    cout<<"----------------------------------------"<<endl;
    for(int a=0;a<vectr.size();a++){
        if(vectr[a].getTipo()==ingreso&&vectr[a].getEstado()==true){
        vectr[a].mostrar();
        cout<<endl;
    }
    system("pause");
    system("cls");
}

void clientesListaID(ArchivoCliente* vectr){
    cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"MENU LISTADOS: CLIENTES"<<endl;
    cout<<"----------------------------------------"<<endl;
}


void empleadoLista(ArchivoEmpleado* vectr){
    cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"MENU LISTADOS: EMPLEADOS"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int a=0;a<vectr.size();a++){
        vectr[a].mostrar();
        cout<<endl;
    }
    system("pause");
    system("cls");
}

void empleadoListaJerarquia(ArchivoEmpleado* vectr){
    cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"MENU LISTADOS: EMPLEADOS"<<endl;
    cout<<"----------------------------------------"<<endl;
    int ingreso;
    cout<<"INDIQUE JERARQUIA A LISTAR: "<<endl;
    cout<<"TIPO DE JERARQUIA (1: CAJERO, 2: GERENTE): ";cin>>ingreso;
           if(ingreso!=1||ingreso!=2){
         do{cout<<"INGRESE UN TIPO DE JERARQUIA VALIDA"<<endl;
            cout<<"TIPO DE JERARQUIA (1: CAJERO, 2: GERENTE): ";cin>>ingreso;
            cout<<endl;
          } while(ingreso !=1&&ingreso !=2);
            }
    cout<<endl;
    system("cls");

    cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
    cout<<"----------------------------------------"<<endl;
if(ingreso==1){cout<<"---CAJEROS REGISTRADOS---"<<endl;} else if(ingreso==2){cout<<"---GERENTES REGISTRADOS---"<<endl;}
    cout<<"----------------------------------------"<<endl;
    for(int a=0;a<vectr.size();a++){
        if(vectr[a].getJerarquia()==ingreso&&vectr[a].getEstado()==true){
        vectr[a].mostrar();
        cout<<endl;
    }
    system("pause");
    system("cls");
}

void empleadoListaID(ArchivoEmpleado* vectr){
cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"MENU LISTADOS: EMPLEADOS"<<endl;
    cout<<"----------------------------------------"<<endl;
}


#endif // LISTADOS_H_INCLUDED
