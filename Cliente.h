#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente: public Persona{
private:
   int _tipo

public:
    Cliente();

    void setTipo(int _tipo);

    int getTipo(return _tipo);

Cargar(){
    Persona.cargar();
    cout<<"TIPO DE CLIENTE: ";cin>>_tipo;
}

};

#endif // CLIENTE_H_INCLUDED
