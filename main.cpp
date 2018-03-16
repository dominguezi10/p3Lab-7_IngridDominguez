#include <iostream>
#include "Racional.h"
#include <vector>
using namespace std;

// prototipos
int menu();

//suma
void suma();
void sumaAsignacion();
//resta
void resta();
void restaAsignacion();
//multipicacion
void multiplicacion();
void multiplicacionAsignacion();
//division
void division();
void divisionAsignacion();

int main(){
    int opcion = 0;
    //vector<*Racional> lasFraciones;
    while(opcion !=10){
        opcion = menu();
        switch(opcion){
            case 1: 
                    suma();
            
            break;

            case 2:{
                resta();
            };
            break;

            case 3:{
                    multiplicacion();
            };
            break;

            case 4: {
                    division();
            };
            break;

            case 5:{
                    sumaAsignacion();
            };
            break;

            case 6:{
                    restaAsignacion();
            };
            break;

            case 7: {
                    multiplicacionAsignacion();
            };
            break;

            case 8:{
                    divisionAsignacion();
            };
            break;

            case 9:{

            };
            break;

            case 10:{
                break;
            };
            
        }// fin de switch

    }// fin del while


    return 0;
}

int menu(){
    int opcion = 0;
    
    while( !(opcion>=1 && opcion<=10)  ){
        cout<< "Bienvenido!!" << endl;
        cout<< "Ingresa tu opcion: "<< endl;
        cout<< "1.-suma"<< endl << "2.- resta"<< endl <<"3.-multiplicacion" << endl<< "4.-Division"<< endl;
        //cout<< "1.- Suma"<< endl <<"2.-Suma y asignacion"<< endl <<"3.- Resta"<<endl << "4.- Resta y asignacion"<< endl;
        cout<< "5.-Suma Asignacion "<< endl << "6.-Resta y asignacion"<< endl <<"7.- Multiplicacion asignacion" << endl;
        cout<< "8.-Division y asignacion" << endl <<"9.- Guardar" << endl <<"10.-Salir" << endl;
        cin>> opcion;
    }

    cout << endl;
    return opcion;
}

void suma(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- SUMA -----------"<< endl;
    while(cont<=2){
        int numerador;
        int denominador;
        cout<< "Suma: "<< cont << endl;
        cout<< "Ingrese su numerador: ";
        cin>> numerador;

        cout<< "Ingrese el denominador: ";
        cin>> denominador;

        if(cont == 1){
            uno = new Racional(numerador, denominador);
        }else  if(cont== 2){
            dos = new Racional(numerador, denominador);
        }
        cont++;
    }

    const Racional* suma;
    suma= *uno + *dos;
    cout <<  "es la suma?? "<< *suma<< endl<< endl;
}

void resta(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- Resta -----------"<< endl;
    while(cont<=2){
        int numerador;
        int denominador;
        cout<< "Resta: "<< cont << endl;
        cout<< "Ingrese su numerador: ";
        cin>> numerador;

        cout<< "Ingrese el denominador: ";
        cin>> denominador;

        if(cont == 1){
            uno = new Racional(numerador, denominador);
        }else  if(cont== 2){
            dos = new Racional(numerador, denominador);
        }
        cont++;
    }

    const Racional* suma;
    suma= *uno - *dos;
    cout <<  "es la resta?? "<< *suma<< endl<< endl;
}

void multiplicacion(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- mul -----------"<< endl;
    while(cont<=2){
        int numerador;
        int denominador;
        cout<< "Resta: "<< cont << endl;
        cout<< "Ingrese su numerador: ";
        cin>> numerador;

        cout<< "Ingrese el denominador: ";
        cin>> denominador;

        if(cont == 1){
            uno = new Racional(numerador, denominador);
        }else  if(cont== 2){
            dos = new Racional(numerador, denominador);
        }
        cont++;
    }

    const Racional* suma;
    suma= (*uno) * (*dos);
    cout <<  "es la multiplicacion?? "<< *suma<< endl<< endl;
}

void division(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- Division -----------"<< endl;
    while(cont<=2){
        int numerador;
        int denominador;
        cout<< "Resta: "<< cont << endl;
        cout<< "Ingrese su numerador: ";
        cin>> numerador;

        cout<< "Ingrese el denominador: ";
        cin>> denominador;

        if(cont == 1){
            uno = new Racional(numerador, denominador);
        }else  if(cont== 2){
            dos = new Racional(numerador, denominador);
        }
        cont++;
    }

    const Racional* division;
    division= (*uno) / (*dos);
    cout <<  "es la division?? "<< *division<< endl<< endl;
}


void sumaAsignacion(){
    int cont = 1;
     Racional *uno;
    const Racional *dos;

    cout<< "---------------- Se asignara a "<<1<< "los elemtos de "<< 2<<"-----------"<< endl;
    while(cont<=2){
        int numerador;
        int denominador;
        cout<< "Resta: "<< cont << endl;
        cout<< "Ingrese su numerador: ";
        cin>> numerador;

        cout<< "Ingrese el denominador: ";
        cin>> denominador;

        if(cont == 1){
            uno = new Racional(numerador, denominador);
        }else  if(cont== 2){
            dos = new Racional(numerador, denominador);
        }
        cont++;
    }

    *uno += *dos;
    cout <<  "es la suma Asignacion?? "<< *uno<< endl<< endl;
}

void restaAsignacion(){
    int cont = 1;
    Racional *uno;
    const Racional *dos;

    cout<< "---------------- Se asignara a "<<1<< "los elemtos de "<< 2<<"-----------"<< endl;
    while(cont<=2){
        int numerador;
        int denominador;
        cout<< "Resta: "<< cont << endl;
        cout<< "Ingrese su numerador: ";
        cin>> numerador;

        cout<< "Ingrese el denominador: ";
        cin>> denominador;

        if(cont == 1){
            uno = new Racional(numerador, denominador);
        }else  if(cont== 2){
            dos = new Racional(numerador, denominador);
        }
        cont++;
    }

    *uno -= *dos;
    cout <<  "es la resta Asignacion?? "<< *uno<< endl<< endl;
}

void multiplicacionAsignacion(){
    int cont = 1;
    Racional *uno;
    const Racional *dos;

    cout<< "---------------- Se asignara a "<<1<< "los elemtos de "<< 2<<"-----------"<< endl;
    while(cont<=2){
        int numerador;
        int denominador;
        cout<< "Resta: "<< cont << endl;
        cout<< "Ingrese su numerador: ";
        cin>> numerador;

        cout<< "Ingrese el denominador: ";
        cin>> denominador;

        if(cont == 1){
            uno = new Racional(numerador, denominador);
        }else  if(cont== 2){
            dos = new Racional(numerador, denominador);
        }
        cont++;
    }

    *uno *= *dos;
    cout <<  "es la mutiplicacion Asignacion?? "<< *uno<< endl<< endl;
}

void divisionAsignacion(){
    int cont = 1;
    Racional *uno;
    const Racional *dos;

    cout<< "---------------- Se asignara a "<<1<< "los elemtos de "<< 2<<"-----------"<< endl;
    while(cont<=2){
        int numerador;
        int denominador;
        cout<< "Resta: "<< cont << endl;
        cout<< "Ingrese su numerador: ";
        cin>> numerador;

        cout<< "Ingrese el denominador: ";
        cin>> denominador;

        if(cont == 1){
            uno = new Racional(numerador, denominador);
        }else  if(cont== 2){
            dos = new Racional(numerador, denominador);
        }
        cont++;
    }

    *uno /= *dos;
    cout <<  "es la division Asignacion?? "<< *uno<< endl<< endl;
}