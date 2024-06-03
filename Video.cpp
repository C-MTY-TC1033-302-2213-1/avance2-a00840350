/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 26-Mayo-24
*/

#include "Video.h"
using namespace std;
// Constructores
Video::Video(){
    iD = "A00840350";
    titulo = "Krister";
    duracion = 1000;
    genero = "Masculino";
    calificacion = 100;
}

Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacion){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacion = _calificacion;
}


// Metodos modificadores - setters
void Video::setId(string _iD){
    iD = _iD;
}

void Video::setTitulo(string _titulo){
    titulo = _titulo;
}

void Video::setDuracion(int _duracion){
    duracion = _duracion;
}

void Video::setGenero(string _genero){
    genero = _genero;
}

void Video::setCalificacion(double _calificacion){ 
    calificacion = _calificacion;
}


// Metodos de acceso - getters
string Video::getId(){
    return iD;
}

string Video::getTitulo(){
    return titulo;
}

int Video::getDuracion(){
    return duracion;
}

string Video::getGenero(){
    return genero;
}

double Video::getCalificacion(){
    return calificacion;
}

// Otros métodos
string Video::str(){
    return  iD + " " + titulo + " " + to_string(duracion) + " " + genero + " " + to_string(calificacion);
}