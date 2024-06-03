/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 26-Mayo-24
En esta clase vi como meter en una misma clase la composición y la herencia
*/

#ifndef Serie_h
#define Serie_h

//para Herencia
#include "Video.h"
//para Composicion
#include "Episodio.h"
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;
class Serie: public Video{
private:
 Episodio episodios[5];
 int cantidad;

public:
// metodo constructor
Serie();
Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacion);

// Metodos modificadores - setters
void setEpisodio(int posicion, Episodio episodio);
void setCantidad(int _cantidad);


// Metodos de Acceso - getters
Episodio getEpisodio(int posicion);
int getCantidad();


// Otros metodos
double calculaPromedio();

string str();

void agregaEpisodio(Episodio episodio);

void calculaDuracion();
};

#endif /* Serie_h */