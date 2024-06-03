/*
Nombre: Krister Elian Villarreal Gámez
Matricula: A00840350
Carrera: ITC
Fecha: 26-Mayo-24
*/


#include "Serie.h"


// metodo constructor
Serie::Serie():Video(){
    // Solo vamos a inicializar cantidad
    cantidad = 0;
}
Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacion): Video(_iD, _titulo, _duracion, _genero, _calificacion){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacion = _calificacion;
}

// Metodos modificadores - setters
void Serie::setEpisodio(int posicion, Episodio episodio){
    // Primero validar que exista ese episodio
    if (posicion >= 0 && posicion < cantidad){
        episodios[posicion] = episodio;
    }
}

// Cambiar el valor del atributo cantidad con el nuevo valor recibir _cantidad
void Serie::setCantidad(int _cantidad){
    cantidad = _cantidad;
}


// Metodos de Acceso - getters
Episodio Serie::getEpisodio(int posicion){
    // Crea un objeto del tipo Episodio y lo inicializa con el Constructor Default
    Episodio epi;
    // Primero validar que exista ese episodio solicitado que esta en la posicion
    if (posicion >= 0 && posicion < cantidad){
        return episodios[posicion];
    }

    // Si no existe se retorna un Episodio default
    return epi;
}

// Retorna el valor del atributo cantidad
int Serie::getCantidad(){
    return cantidad;
}


// Otros metodos
double Serie::calculaPromedio(){
double acum = 0;

for(int index = 0; index < cantidad; index++){
    acum += episodios[index].getCalificacion();
}

// validar que tenga episodios
if (cantidad > 0){
    return acum / cantidad;
}
else{
    return 0;
}

}

string Serie::str(){
    // Por mientras
    return Video::str();
}

// Validar un episodio solo si existe espacio
void Serie::agregaEpisodio(Episodio episodio){
    if (cantidad < 5){
        episodios[cantidad++] = episodio;
    }
}

void Serie::calculaDuracion(){
    int acum1 = 0;
for(int index = 0; index < cantidad; index++){
    acum1 += episodios[index].getTemporada();
}
cout <<  acum1 << endl;
}