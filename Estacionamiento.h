class Estacionamiento{
private:
int _IDEstacionamiento;
float _Precio;
char _TipoVehiculo;
bool _Estado;

public:
Estacionamiento();

int getIDEstacionamiento(){return _IDEstacionamiento;}
float getPrecio(){return _Precio;}
char getTipoVehiculo(){return _TipoVehiculo;}
bool getEstado(){return _Estado;}

void setIDEstacionamiento(int estacionamiento){_IDEstacionamiento=estacionamiento;}
void setPrecio(float precio){_Precio=precio;}
void setTipoVehiculo(char tipo){_TipoVehiculo=tipo;}
void setEstado(bool estado){_Estado=estado;}

void cargar(){
  cout<<"NUMERO DE LUGAR: ";cin>>_IDEstacionamiento;
        cout<<"TIPO: "; cin>>_TipoVehiculo;
        cout<<"PRECIO POR DIA: ";cin>>_Precio;
        _estado=true;
}

void mostrar(){
  cout<<"NUMERO DE LUGAR: "<<_IDEstacionamiento<<"  TIPO: "<<_TipoVehiculo<<"  PRECIO POR DIA: "<<_Precio<<endl;
}
};
