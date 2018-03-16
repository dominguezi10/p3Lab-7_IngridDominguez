#include <iostream>
#include "Racional.h"
#include <vector>
using namespace std;

// prototipos
int menu();

//suma
void suma();
//resta
void resta();
//multipicacion
void multipicacion();
//division
void division();

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
                    multipicacion();
            };
            break;

            case 4: {
                    division();
            };
            break;

            case 5:{

            };
            break;

            case 6:{

            };
            break;

            case 7: {

            };
            break;

            case 8:{

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
        cout<< "5.-Multiplicaciòn "<< endl << "6.-Multiplicacion y asignacion"<< endl <<"7.- Division" << endl;
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

void multipicacion(){
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