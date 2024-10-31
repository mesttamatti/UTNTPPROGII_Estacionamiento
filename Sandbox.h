//aqui se puede ir escribiendo pedazos de codigo, partes, dejar ideas, bocetos, etc
/*
Archivos: mejor hacer funcion que cargue los registros en un vector dinamico, entonces las busquedas se personalizan en funciones (evitar abrir y cerrar archivo a cada rato)

Archivo movimientos: Escribir archivo solo los 15 ultimos
Ultimo en agregarse es el primero

logica:
crear registro nuevo de movimiento

abrir archivo
int cantReg= archivo.contar reg() 
crear vec din movimientos[cantReg];

cargar el vector con los registros guardados

archivo.vaciar();

registro nuevo.escribir() // el nuevo registro quedara siempre primero

cantReg= (cantReg<=14) ? cantReg : 14; //verificar si cantReg es menor o igual a 14. si es menor o igual se puede escribir todos, sino quedaran los 14 primeros
hago un for(r=0;r<cantReg;r++){
vector[r].escribir()
}

//codigo escribir en archivo movimientos
 bool actualizarArchivo(Movimiento reg) {
        FILE* p;
        p = fopen(nombre, "ab");
        if(p == NULL) return false;
        
        int cantReg = contarRegistros();
        Movimiento *archivocargado;
        archivocargado = new Movimiento[cantReg];
        
        if(archivocargado==NULL){
            cout<<”Error de asignación de memoria”<<endl;
            return false;
            }
        cargarArchivoEnMemoria(Movimiento *archivocargado);
        vaciar();
        ArchivoReg.escribirRegistro(reg);
        cantReg= (cantReg<=14) ? cantReg : 14; //verificar si cantReg es menor o igual a 14. si es menor o igual se puede escribir todos, sino quedaran los 14 primeros
        for(r=0;r<cantReg;r++){
        ArchivoReg.escribirRegistro(archivocargado[r]);
        }

        fclose(p);
        return escribio;
    }

//

////codigo para cargar achivos en mem din
//iniciar el vector en el menu de busquedas
TipoObjeto *punterovector;
       
cargarArchivoEnMemoria(TipoObjeto *punterovector){
Archivo archTipoObjeto;
TipoObjeto reg;

FILE* p;
        p = fopen(nombre, "rb");
        if (p == NULL) return punterovector;
        
int cantReg= archTipoObjeto.contar reg();

punterovector = new TipoObjeto[cantReg];
if(punterovector==NULL){
            cout<<”Error de asignación de memoria”<<endl;
            return -1;
            }

for(int i=0;i){
fseek(p, sizeof(reg) * i, 0);
fread(&punterovector[i], sizeof reg, 1, p);
}

fclose(p);        
return punterovector; }   
//hacer busquedas

ej - - funcionListadoEmpleado(TipoObjeto *punterovector);

delete punterovector;
//salir al menu anterior
///fin codigo



Solicitudes de reserva: abl 

>>>>>>>>>faltan las funciones de busqueda, reciben el vector dinamico cargado con el archivo indicado
>>>>>>>>>archivo reservas
>>>>>>>>>archivo cliente

*/
