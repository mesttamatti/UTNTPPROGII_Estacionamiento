/*
Lista de acciones:
1. Hizo la Reserva #
2. Cancelo la Reserva #
3. Acepto y creo la Reserva #
4. Dio alta al Cliente #
5. Dio de baja al Cliente #
6. Cambio el precio de Estacionamiento #
7. Clausuro el Estacionamiento #
8. Dio de alta el Estacionamiento #
9. Dio alta al Cajero #
10. Dio de baja al Cajero #
11. Dio alta al Gerente #
12. Dio de baja al Gerente #
*/



class Movimiento{
private:
Fecha _fecha;
int _idUsuario;
int _tipoUser; //1: Cajero, 2: Gerente
int _accion;
int _idRegistro;

public:

Movimiento(){};

void Cargar(int idUser, int tipo, int accion, int idReg){
this->_fecha.cargar();
_accion=accion;
_idUsuario=idUser;
_tipoUser= tipo;
_idRegistro=idReg;
};

void Mostrar(){
cout<<_fecha.toString();
  
if(_tipoUser==1){"El Cajero #"} else if(_tipoUser==2){"El Gerente #"}
  
cout<<_idUsuario;
  
switch(_accion){
case 1:
  cout<<" Hizo la Reserva #";
    break;

  case 2:
  cout<<" Cancelo la Reserva #";
    break;

  case 3:
  cout<<" Acepto y creo la Reserva #";
    break;

  case 4:
  cout<<" Cancelo la Reserva #";
    break;

  case 5:
  cout<<" Dio alta al Cliente #";
    break;

  case 6:
  cout<<" Cambio el precio de Estacionamiento #";
    break;

  case 7:
  cout<<" Clausuro el Estacionamiento #";
    break;

  case 8:
  cout<<" Dio de alta el Estacionamiento #";
    break;

  case 9:
  cout<<" Dio alta al Cajero #";
    break;

  case 10:
  cout<<" Dio de baja al Cajero #";
    break;

  case 11:
  cout<<" Dio alta al Gerente #";
    break;

  case 12:
  cout<<" Dio de baja al Gerente #";
    break;
}
  
cout<<_idRegistro<<endl;

}

};
