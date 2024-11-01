#ifndef LISTADOS_H_INCLUDED
#define LISTADOS_H_INCLUDED

void listadosCliente();

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
        cout<<"3 - ORDENAR POR ID   "<<endl;
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

void empleadoLista(ArchivoEmpleado* vectr){
    for(int a=0;a<vectr.size();a++){
        vectr[a]
    }
}

void empleadoListaJerarquia(ArchivoEmpleado* vectr){
}

void empleadoListaID(ArchivoEmpleado* vectr){}


#endif // LISTADOS_H_INCLUDED
