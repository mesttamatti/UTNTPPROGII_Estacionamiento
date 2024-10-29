#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente: public Persona{
private:
   char _tipo;

public:
    Cliente();

    void setTipo(char _tipo);

    char getTipo(return _tipo);

Cargar(){
    Persona.cargar();
    cout<<"TIPO DE CLIENTE: "<<endl;
   cout<<"A: EMPRESA, B: PARTICULAR ";cin>>_tipo;
   
   do{
      if(_tipo=="a"||_tipo=="A"){_tipo="A"; } else if(_tipo=="b"||_tipo=="B"){ _tipo="B";} else{
         cout<<"TIPO DE CLIENTE INVALIDO"<<endl;
         cout<<endl;
         cout<<"TIPO DE CLIENTE: "<<endl;
         cout<<"A: EMPRESA, B: PARTICULAR ";cin>>_tipo;
      }
     } while(_tipo != "A" || _tipo != "B");
      
}

void Mostrar(){
   Persona.mostrar();
   cout<<"TIPO: "<<_tipo;
   if(_tipo=="A"){ cout<<" EMPRESA"<<endl;} else if(_tipo=="B"){ cout<<" PARTICULAR"<<endl;}

}

};

#endif // CLIENTE_H_INCLUDED
