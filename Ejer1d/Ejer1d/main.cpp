#include "usuario.h"

int main()
{
	int filas = 4;
	int columnas = 4;
	usuario*** m;
	m = new usuario ** [columnas];
	for (int i = 0; i < filas; i++) {
		m[i] = new usuario * [filas];
	}
	cout << endl << endl;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			m[i][j]=NULL;
		}
	}

	//Mostramos los valores contenidos en la matriz
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "(" << i << "," << j << ")" << m[i][j]->toString();
		}
	}

	cout << endl << endl;
	m[0][0]->setNombre("Juan");
	m[0][1]->setNombre("Rosa");
	m[0][3]->setNombre("Ana");
	m[3][3]->setNombre("Luisa");
	cout << endl << endl;
	//Mostramos los valores contenidos en la matriz
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "(" << i << "," << j << ")" << m[i][j]->toString();
		}
	}
	cin.get();
	return 0;
}