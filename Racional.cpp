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
int Racional:: getNumerador()const{
    return numerador;
}

int Racional:: getDenominador()const{
    return denominador;
}

Racional:: Racional(){
};

Racional:: Racional(int numerador, int denominador){
    this->numerador = numerador;
    this->denominador = denominador;
    Simplificar();
};

void Racional:: Simplificar(){
    int numeroMayor;
    if (numerador < denominador){
        numeroMayor = denominador;
    }else{
        numeroMayor = numerador;
    }

    for (int i = 1; i <= numeroMayor; i++){
        if ((numerador % i) == 0 && (denominador % i == 0)){
            numerador = (numerador / i);
            denominador = (denominador / i);
        }
    } // fin del for

    
}// fin de simplificar

Racional:: ~Racional(){
};


///metodos para trabajar
ostream &operator<<(ostream &out, const Racional &racional){
    out << racional.numerador <<"/"<<racional.denominador << endl;
    return out;
}

const Racional *Racional::operator+(const Racional &B) const{
    int numerador;
    int denominador;

    numerador = (this->numerador * B.getDenominador()) + (this->denominador * B.getNumerador());
    denominador = this->denominador * B.getDenominador();

    Racional *nuevo = new Racional(numerador, denominador); 
    return nuevo;
}

const Racional *Racional::operator-(const Racional &B) const{
    int numerador;
    int denominador;

    numerador = (this->numerador * B.getDenominador()) - (this->denominador * B.getNumerador());
    denominador = this->denominador * B.getDenominador();

    Racional *nuevo = new Racional(numerador, denominador); 
    return nuevo;
}