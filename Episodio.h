/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 26-Mayo-24
En esta clase aprendí como hacer los parámetros de la clase de episodio, y recordé como hacer una clase de manera normal
*/

#ifndef Episodio_h
#define Episodio_h

using namespace std;

#include <stdio.h>
#include <string>
#include <math.h>

class Episodio{
// Atributos
private:
string titulo;
int temporada;
double calificacion;

public:
// Constructores
Episodio();
Episodio(string _titulo, int _temporada, int _calificacion);

// Metodos modificadores - setters
void setTitulo(string _titulo);
void setTemporada(int _temporada);
void setCalificacion(int _calificacion);

// Metodos de acceso - getters
string getTitulo();
int getTemporada();
int getCalificacion();

// Otros métodos
string str();
};

#endif /* Episodio_h */