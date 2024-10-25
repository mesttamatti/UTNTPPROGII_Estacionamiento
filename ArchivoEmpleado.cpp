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

    bool escribirRegistro(Empleado reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) return false;
        bool escribio = fwrite(&reg, sizeof reg, 1, p);
        fclose(p);
        return escribio;
    }

    Empleado leerRegistro(int pos) {
        Empleado reg;
        reg.setNumeroPasajero(-1);
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return reg;
        fseek(p, sizeof(Punto1) * pos, 0);
        fread(&reg, sizeof reg, 1, p);
        fclose(p);
        return reg;
    }

    int contarRegistros() {
        FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return -1;
        fseek(p, 0, 2);
        int tam = ftell(p);
        fclose(p);
        return tam / sizeof(Punto1);
    }

    bool listarArchivo(int jerarquia) {
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

    bool modificarRegistro(Empleado obj, int nroReg) {
        FILE* p = fopen(nombre, "rb+");
        if (p == NULL) {
            return false;
        }
        fseek(p, nroReg * sizeof(Punto1), SEEK_SET);
        bool ok = fwrite(&obj, sizeof(Punto1), 1, p);
        fclose(p);
        return ok;
    }

bool validarId(int id){
    Empleado obj;
    FILE *p;
    p=fopen("Empleado.dat","rb");
    if(p==nullptr){
        return -2;
    }
    int pos=0;
    while(fread(&obj, sizeof obj, 1, p)==1){
        if(obj.getId()==id && obj.getEstado()==true){
            fclose(p);
            return true;
        }
        pos++;
    }
    fclose(p);
    return false;
}

int buscarPorId(int id){
    Empleado obj;
    FILE *p;
    p=fopen("Empleado.dat","rb");
    if(p==nullptr){
        return -2;
    }
    int pos=0;
    while(fread(&obj, sizeof obj, 1, p)==1){
        if(obj.getId()==id && obj.getEstado()==true){
            fclose(p);
            return pos;
        }
        pos++;
    }
    fclose(p);
    return -1;
}

int login(int id){
    Empleado obj;
    FILE *p;
    p=fopen("Empleado.dat","rb");
    if(p==nullptr){
        return -2;
    }
    char* ingreso[15];
    cout<<"INGRESE PASSWORD\n
        (RESPETE MAYUSCULAS Y MINUSCULAS)\n
    > "; cin<<ingreso;
    cls();
    
    bool idCoincidente=0;
    int pos=0;
    
    while(fread(&obj, sizeof obj, 1, p)==1){
        if(obj.getId()==id && obj.getEstado()== true){
            fclose(p);
            idCoincidente =1;
        }
        pos++;
    }
    fclose(p);
    
    if(idCoincidente==1){
        if(strcmp(*obj.getPassword(), *ingreso)==0){
            return obj.getJerarquia();
    } else{
        bool continuar;
        cout<<"PASSWORD NO VALIDO. REINTENTAR? (1: SI -- 0: NO): "; cin<<continuar;
        
        while(continuar){
            cout<<"INGRESE PASSWORD\n
                (RESPETE MAYUSCULAS Y MINUSCULAS)\n
                > "; cin<<ingreso;
            cls();
            
        if(strcmp(*obj.getPassword(), *ingreso)==0){
        return obj.getJerarquia();
    } else{  
            cout<<"PASSWORD NO VALIDO. REINTENTAR? (1: SI -- 0: NO): "; cin<<continuar;
            }
        }
    }
    } else{ 
        cout<<"NO SE ENCONTRO ID VALIDO EN REGISTROS";
        cls();
        return 0;} 
    
}

};

