/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 26-Mayo-24
*/

#include "Pelicula.h"

// Constructores: con vacio y con parámetros
    Pelicula::Pelicula():Video(){
        oscares = 100;
    }

    Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacion, int _oscares):Video(_iD, _titulo, _duracion, _genero, _calificacion){
        oscares = _oscares;
    }


    // Método modificador - set
    void Pelicula::setOscares(int _oscares){
        oscares = _oscares;
    }


    // Método de acceso - get
    int Pelicula::getOscares(){
        return oscares;
    }


    // Otros metodos
    string Pelicula::str(){
        // Tenemos acceso directo a los atributos de la clase padre porque son protected
        return  iD + " " + titulo + " " + to_string(duracion) + " " + genero + " " + to_string(calificacion) + ' ' + to_string(oscares);
    }