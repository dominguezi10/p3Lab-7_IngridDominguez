#include <iostream>
#include <string>
#include <sstream>
#include "Racional.h"
#include <fstream>
using namespace std;

void Racional:: setNumerador(int numerador){
    this->numerador = numerador;
}

void Racional:: setDenominador(int denominador){
    this->denominador = denominador;
}

Racional:: Racional(){
};

Racional:: Racional(int numerador, int denominador){
    this->numerador = numerador;
    this->denominador = denominador;
};

Racional:: ~Racional(){
};


///metodos para trabajar
ostream &operator<<(ostream &out, const Racional &racional){
    out << racional.numerador <<","<<racional.denominador << endl;
    return out;
}

