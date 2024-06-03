/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 26-Mayo-24
Aprendí a como usar la herencia para hacer esta clase
*/

#ifndef Pelicula_h
#define Pelicula_h

#include <string>
#include "Video.h"
using namespace std;

// Clase Pelicula es derivada de Video
class Pelicula : public Video{
    //Atributos
    private:
    int oscares;

    public:
    // Constructores: con vacio y con parámetros
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacion, int _oscares);

    // Método modificador - set
    void setOscares(int _oscares);

    // Método de acceso - get
    int getOscares();

    // Otros metodos
    string str();
};

#endif /* Episodio_h */