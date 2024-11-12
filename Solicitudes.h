Class Solicitudes: public Reserva{
private:
int _numero; //
char _nombre[30];
char _apellido[30];
char _email[30];

public:

    void cargar(){
        Reserva::setIDEstacionamiento(int estacionamiento);
        Reserva::setDias(int dias);

Reserva::setFechaI(Fecha ingreso)}
Reserva::_Importe= reg.getPrecio(archivEst.leerRegistro(archivEst.buscarporID(estacionamiento)));
        Reserva::_Importe=_Importe*_Dias;
        cout<<"IMPORTE TOTAL: "; _Importe;
        
 Reserva::setIDCliente(int cliente);
        cout<<"NOMBRE "; cin>>_nombre;
        cout<<"APELLIDO "; cin>>_apellido;
        cout<<"EMAIL "; cin>>_email;

        _estado=true;
    }

void Mostrar(){
        cout<<"NUMERO DE SOLICITUD: "<<_id<<endl;
        cout<<" SOLICITADO POR: "<<_nombre<<" "<<_apellido<<endl;
        cout<<"EMAIL: "<<_email<<"  TELEFONO: "<<_telefono<<endl;
        cout<<" LUGAR SOLICITADO: #"<<Reserva::getIDEstacionamiento()<<endl;
cout<<" DESDE LA FECHA: "<<Reserva::getFechaIngreso().toString()<<" Y POR "<<Reserva::getDias()<<endl;
cout<<" POR EL IMPORTE TOTAL DE: $"<<Reserva::getImporte()<<endl;
    }


};
