// Prototipos de funciones
void MenuPrincipal();
void MenuCajero();
void MenuGerente();

int main() {
    MenuPrincipal();
    return 0;
}

void MenuPrincipal() {

    while(true){
        int opc;
        
        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU PRINCIPAL"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"CONSULTAR POR ESTACIONAMIENTO DISPONIBLE"<<endl;
        cout<<"1 - POR TIPO DE VEHICULO"<<endl;
        cout<<"2 - POR NUMERO DE LUGAR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"3 - LOGIN PARA EMPLEADOS"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");
        
        switch(opc){
            case 1:
                char tipo;
                cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"MENU PRINCIPAL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"CONSULTAR POR ESTACIONAMIENTO DISPONIBLE"<<endl;
                cout<<"POR TIPO DE VEHICULO"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"INGRESE SU TIPO DE VEHICULO (LETRA):"<<endl; 
                cout<<"A: CAMION/COLECTIVO. B: AUTO COMUN/FAMILIAR. C: MOTOCICLETA"<<endl;
                cin>>tipo;
                cout<<endl;

                
                system("cls");
                break;
            
            case 2:
                int lugar;
                cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"MENU PRINCIPAL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"CONSULTAR POR ESTACIONAMIENTO DISPONIBLE"<<endl;
                cout<<"POR NUMERO DE LUGAR"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"INGRESE EL NUMERO DE LUGAR DE ESTACIONAMIENTO:"; cin>>lugar;
                cout<<endl;

                
                system("cls");
                break;
            case 3:        
                int iduser;
                Empleado reg;
                cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"MENU PRINCIPAL"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"LOGIN PARA EMPLEADOS"<<endl;
                cout<<"DEBERÁ CONTAR CON REGISTRACION PREVIA EN EL SISTEMA"<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"INGRESE EL NUMERO DE ID DE EMPLEADO:"; cin>>iduser;
                cout<<endl;
                int tipoMenuEmpleado = reg.login(iduser);
                if(tipoMenuEmpleado ==1){menuCajero();} else if(tipoMenuEmpleado == 2){menuGerente();};
                
                system("cls");
                break;
            
            case 0:
                return false;
            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                system("pause");
                break;
        }
        system("pause");
    }
}



void menuCajero() {
        while(true){
        int opc;
        
        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU CAJERO"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"1 - HACER RESERVA"<<endl;
        cout<<"2 - CANCELAR RESERVA"<<endl;
        cout<<"3 - SOLICITUDES DE RESERVA"<<endl;
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
                
                break;
            case 2:
                // Lógica para cancelar reserva
                break;
            case 3:
                // Lógica para dar de alta cliente
                break;
            case 4:
                // Lógica para dar de baja cliente
                break;
        }
    }
}

void menuGerente() {
     while(true){
        int opc;
        
        system("cls");
        cout<<"ESTACIONAMIENTO MULTINIVEL"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"MENU GERENCIA"<<endl;
       cout<<"----------------------------------------"<<endl;
        cout<<"1 - ULTIMOS 15 MOVIMIENTOS EN SISTEMA"<<endl;
        cout<<"2 - CAMBIAR PRECIO DE ESTACIONAMIENTO"<<endl;
        cout<<"3 - CLAUSURAR LUGAR"<<endl;
        cout<<"4 - DAR DE ALTA UN LUGAR"<<endl;
        cout<<"5 - DAR DE ALTA UN CAJERO"<<endl;
        cout<<"6 - DAR DE BAJA UN CAJERO"<<endl;
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
                
                break;
            case 2:
                // Lógica para cancelar reserva
                break;
            case 3:
                // Lógica para dar de alta cliente
                break;
            case 4:
                // Lógica para dar de baja cliente
                break;
        }
    }
   
        
}
