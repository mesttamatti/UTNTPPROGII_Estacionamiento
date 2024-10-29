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

Solicitudes de reserva: abl 

>>>>>>>>>faltan las funciones de busqueda, reciben el vector dinamico cargado con el archivo indicado
>>>>>>>>>archivo reservas
>>>>>>>>>archivo cliente

*/
