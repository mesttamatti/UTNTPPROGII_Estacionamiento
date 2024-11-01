#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#pragma once

class Persona{
private:
        int _id;
        char _nombre[30];
        char _apellido[30];
        char _email[30];
        int _telefono;
        bool _estado;
public:

    void cargar(){
        cout<<"NUMERO DE IDENTIFICACION: ";cin>>_id;
        cout<<"NOMBRE "; cin>>_nombre;
        cout<<"APELLIDO "; cin>>_apellido;
        cout<<"EMAIL "; cin>>_email;
        cout<<"TELEFONO "; cin>>_telefono;
        _estado=true;
    }

    void Mostrar(){
        cout<<"NUMERO DE IDENTIFICACION: "<<_id<<endl;
        cout<<"NOMBRE: "<<_nombre<<" "<<_apellido<<endl;
        cout<<"EMAIL: "<<_email<<"  TELEFONO: "<<_telefono<<endl;
    }

	int getID(){return _id;}
	const char *getNombre(){return _nombre;}
	const char *getApellido(){return _apellido;}
	const char *getEmail(){return _email;}
	int getTelefono(){return _telefono;}
	bool getEstado(){return _estado;}


	void setId(int nump){_id=nump;}
	void setNombre(char* nomb){strcpy(_nombre, nomb);}
	void setApellido(char* apel){strcpy(_apellido, apel);}
	void setEmail(char* mail){strcpy(_email, mail);}
	void setTelefono(int tel){_telefono=tel;}
	void setEstado(bool e){_estado=e;}
};


#endif // PERSONA_H_INCLUDED
