class Empleado: public Persona{
private:
int _jerarquia;
char _password[15];

public: 
  int getJerarquia(){return _jerarquia;}
  void setJerarquia(int tipo){_jerarquia=tipo;}

  const char *getPassword() { return _password; }
  void setPassword(char *pass) { strcpy(_password, pass); }

void cargar(){
  Persona.cargar();
  
}

};
