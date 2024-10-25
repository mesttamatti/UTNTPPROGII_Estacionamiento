class Persona{
private:
        int _id;
        char _nombre[30];
        char _apellido[30];
        char _email[30];
        int _telefono;
        bool estado;
public:

    void Cargar(){
        cout<<"NUMERO DE IDENTIFICACION: ";cin>>_id;
        cout<<"NOMBRE "; strcpy(_nombre,29);
        cout<<"APELLIDO "; strcpy(_apellido,29);
        cout<<"EMAIL "; strcpy(_email,29);
        cout<<"TELEFONO "; cin>>_telefono;
        _estado=true;
    }

    void Mostrar(){
        cout<<"NUMERO DE IDENTIFICACION: "<<_id<<endl;
        cout<<"NOMBRE "<<_nombre<<endl;
        cout<<"APELLIDO "<<_apellido<<endl;
        cout<<"EMAIL "<<_email<<endl;
        cout<<"TELEFONO "<<_telefono<<endl;
    }

	int getID(){return _id;}
	const char *getNombre(){return _nombre;}
	const char *getApellido(){return _apellido;}
	const char *getEmail(){return _email;}
	int getID(){return _telefono;}
	bool getEstado(){return _estado;}


	void setId(int nump){_id=nump;}
	void setNombre(char* nomb){strcpy(_nombre, nomb)}
	void setApellido(char* apel){strcpy(_apellido, apel)}
	void setEmail(char* mail){strcpy(_email, mail)}
	void setTelefono(int tel){_telefono=tel;}
	void setEstado(bool e){_estado=e;}
};
