#ifndef RACIONAL_H
#define RACIONAL_H

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Racional{
    private:
        int numerador;
        int denominador;

    public:
        Racional();
        Racional(int, int);

        void setNumerador(int);
        int getNumerador(){return numerador;}

        void setDenominador(int);
        int getDenominador(){return denominador;}

       // Racional* operator+(Racional&);


        ~Racional();

    friend ostream &operator<<(ostream &, const Racional &); // cout

    // metodos
    const Racional* operator+(const Racional&) const; // probando para suma
    const Racional* operator-(const Racional&) const;// probando resta
    const Racional* operator*(const Racional&) const;// probando multiplicacion
    const Racional* operator/(const Racional&) const;// probando division

    //void
    void operator+=(const Racional&) const; // probando para suma
    void operator-=(const Racional&) const;// probando resta
    void operator*=(const Racional&) const;// probando multiplicacion
    void operator/=(const Racional&) const;// probando division

};

#endif

