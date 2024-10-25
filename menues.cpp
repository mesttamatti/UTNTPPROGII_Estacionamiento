// Prototipos de funciones
void MenuPrincipal();
void Login(int &tipoEmpleado);
void MenuCajero();
void MenuGerente();

int main() {
    MenuPrincipal();
    return 0;
}

void MenuPrincipal() {
    
    if (Login()== 1) {
        MenuCajero();
    } else if(Login()==2){
        MenuGerente();
    } else{
        cout << "Usuario no encontrado";
    }
}

int Login() {
    // Implementar lógica de autenticación y asignar tipo de empleado
    
    cout << "Ingrese ID: ";
    // INGRESO ID
    cout << "Ingrese Contraseña: ";
    // INGRESO PASS
    
    //LEER ARCHIVO EMPLEADOS && ESTADO==TRUE
    // DEVUELVE EL TIPO
    // 1 para Cajero, 2 para Gerente
    return empleado.getJerarquia();
}

void MenuCajero() {
    int opcion;
    do {
        rlutil::cls();
        cout << "Menu Cajero\n";
        cout << "1. Hacer Reserva\n";
        cout << "2. Cancelar Reserva\n";
        cout << "3. Dar de alta Cliente\n";
        cout << "4. Dar de baja Cliente\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
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
    } while (opcion != 5);
}

void MenuGerente() {
    int opcion;
    do {
        rlutil::cls();
        cout << "Menu Gerente\n";
        cout << "1. Últimos 15 movimientos\n";
        cout << "2. Cambiar precio\n";
        cout << "3. Clausurar lugar\n";
        cout << "4. Dar de alta un lugar\n";
        cout << "5. Dar de baja Cajero\n";
        cout << "6. Dar de alta Cajero\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            // Implementar lógica según opción seleccionada
            case 1: 
                // Mostrar movimientos
                break;
            case 2:
                // Cambiar precio
                break;
            // Otras opciones...
        }
    } while (opcion != 7);
}
