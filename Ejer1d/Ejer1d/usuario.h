#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class usuario
{
private:
	string nombre;
public:
	usuario(string);
	usuario();
	void setNombre(string);
	string getNombre();
	string toString();
	string generarClave();
	~usuario();
};


#endif