/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 26-Mayo-24
En esta clase aprendí sobre los valores protected, que se usan para poder usar la herencia a otras clases de manera más facil
*/

#ifndef Video_h
#define Video_h

using namespace std;

#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>

class Video{
// Atributos
protected:
string iD;
string titulo;
int duracion;
string genero;
double calificacion;
public:
// Constructores
Video();
Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacion);

// Metodos modificadores - setters
void setId(string _iD);
void setTitulo(string _titulo);
void setDuracion(int _duracion);
void setGenero(string _genero);
void setCalificacion(double _calificacion);

// Metodos de acceso - getters
string getId();
string getTitulo();
int getDuracion();
string getGenero();
double getCalificacion();

// Otros métodos
virtual string str();
};

#endif /* Video_h */