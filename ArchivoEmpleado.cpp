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
bool listarArchivo();
bool modificarRegistro(Empleado obj, int nroReg);

bool validarId(int id);
int buscarPorId(int id);

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

    bool listarArchivo() {
        Empleado reg;
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

    
};

