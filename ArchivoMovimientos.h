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
        if(p == NULL) return false;
        bool escribio = fwrite(&reg, sizeof reg, 1, p);
        fclose(p);
        return escribio;
    }

    Movimiento leerRegistro(int pos) {
        Movimiento reg;
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
        Movimiento reg;
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

    bool modificarRegistro(Movimiento obj, int nroReg) {
        FILE* p = fopen(nombre, "rb+");
        if (p == NULL) {
            return false;
        }
        fseek(p, nroReg * sizeof(Punto1), SEEK_SET);
        bool ok = fwrite(&obj, sizeof(Punto1), 1, p);
        fclose(p);
        return ok;
    }

    void vaciar(){
        FILE *p = fopen(nombre, "wb");
        if (p == NULL){return ;}
        fclose(p);
    }
};
