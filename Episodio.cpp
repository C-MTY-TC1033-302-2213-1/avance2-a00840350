/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 20-Mayo-24
*/

#include "Episodio.h"
using namespace std;
// Constructores
Episodio::Episodio(){
    titulo = "Krister";
    temporada = 1;
    calificacion = 100;
}

Episodio::Episodio(string _titulo, int _temporada, int _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}


// Metodos modificadores - setters
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}

void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}

void Episodio::setCalificacion(int _calificacion){ 
    calificacion = _calificacion;
}


// Metodos de acceso - getters
string Episodio::getTitulo(){
    return titulo;
}

int Episodio::getTemporada(){
    return temporada;
}

int Episodio::getCalificacion(){
    return calificacion;
}

// Otros métodos
string Episodio::str(){
    return titulo + " " + to_string(temporada) + " " + to_string(calificacion);
}