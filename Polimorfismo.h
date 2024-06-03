/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 26-Mayo-24
Es esta clase aprendi de que consiste el polimorfismo, principalmente como funcionan los apuntadores al guardar la direccion de memoria de otros datos
*/

#ifndef Polimorfismo_h
#define Polimorfismo_h
#include <typeinfo>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Pelicula.h"
#include "Serie.h"
#include "Episodio.h"
using namespace std;
#include <stdio.h>
#include <string>
#include <math.h>
#include "Video.h"
const int MAX_VIDEOS = 100;

class Polimorfismo{
private:
Video *arrPtrVideos[MAX_VIDEOS];
int cantidad;

public:
// Constructor default - vacio
Polimorfismo();

// Metodos modificadores - setters
void setPtrVideo(int index, Video *video);
void setCantidad(int _cantidad);

// Metodos de acceso - getters
Video *getPtrVideo(int index);
int getCantidad();

// Otros metodos
void leerArchivo(string _nombre);
void reporteInventario();
void reporteCalificacion(double _calificacion);
void reporteGenero(string _genero);
void reportePeliculas();
void reporteSeries();
};
#endif /* Polimorfismo_h */