#include "usuario.h"

usuario::usuario(string nombre)
{
	this->nombre = nombre;
	cout << "se ha creado un usuario" << endl;
}

usuario::usuario()
{
	this->nombre = "--";
	cout << "se ha creado un usuario" << endl;
}

void usuario::setNombre(string unNombre) { nombre = unNombre; }
string usuario::getNombre() { return nombre; }

string usuario::toString() {
	stringstream s;
	s << "Nombre: " << this->nombre << ", clave: " << this->generarClave() << endl;
	return s.str();
}

//Este metodo devuelve la clave la cual se genera
//concatenando el nombre de la persona  al reves 
//junto con las primeras 3 letras del nombre invertido
string   usuario::generarClave()
{
	string   usuario = "";
	for (int i = nombre.length() - 1; i >= 0; i--)
	{
		usuario = usuario + nombre[i];
	}
	usuario = usuario + nombre[0] + nombre[1] + nombre[2];
	return usuario;
}


usuario::~usuario()
{
	cout << "Se ha destruido " << nombre << endl;
}

