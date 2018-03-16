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

vector<Racional*> lasFraciones;
void crear();

int main(){
    int opcion = 0;
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
                    crear();
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
        cout<< "8.-Division y asignacion" << endl <<"9.- Crear" << endl <<"10.-Salir" << endl;
        cin>> opcion;
    }

    cout << endl;
    return opcion;
}

void crear(){
    int numerador;
    int denominador;
    cout<< " ---- Crear ---- " << endl;
    cout<< "Ingrese su numerador: ";
    cin>> numerador;

    cout<< "Ingrese el denominador: ";
    cin>> denominador;

    Racional *nuevo = new Racional(numerador, denominador);
    lasFraciones.push_back(nuevo);
}// crear

void suma(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- SUMA -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i];
    }

    
    while(cont<=2){
        int posicion;
        cout<< "Elemento: "<< cont << endl;
        cout<< "Ingrese la posicion del elemento que desea: ";
        cin>> posicion;


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
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
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i];
    }

    
    while(cont<=2){
        int posicion;
        cout<< "Elemento: "<< cont << endl;
        cout<< "Ingrese la posicion del elemento que desea: ";
        cin>> posicion;


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
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

    cout<< "---------------- Multiplicacion -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i];
    }

    
    while(cont<=2){
        int posicion;
        cout<< "Elemento: "<< cont << endl;
        cout<< "Ingrese la posicion del elemento que desea: ";
        cin>> posicion;


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
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
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i];
    }

    
    while(cont<=2){
        int posicion;
        cout<< "Elemento: "<< cont << endl;
        cout<< "Ingrese la posicion del elemento que desea: ";
        cin>> posicion;


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
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

    cout<< "---------------- SUMA ASIGANACION -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i];
    }

    
    while(cont<=2){
        int posicion;
        cout<< "Elemento: "<< cont << endl;
        cout<< "Ingrese la posicion del elemento que desea: ";
        cin>> posicion;


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
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

    cout<< "---------------- RESTA ASIGANCION -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i];
    }

    
    while(cont<=2){
        int posicion;
        cout<< "Elemento: "<< cont << endl;
        cout<< "Ingrese la posicion del elemento que desea: ";
        cin>> posicion;


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
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

    cout<< "---------------- MULTIPLICACION ASIGNACION -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i];
    }

    
    while(cont<=2){
        int posicion;
        cout<< "Elemento: "<< cont << endl;
        cout<< "Ingrese la posicion del elemento que desea: ";
        cin>> posicion;


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
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

    cout<< "---------------- DIVISION ASIGNACION -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i];
    }

    
    while(cont<=2){
        int posicion;
        cout<< "Elemento: "<< cont << endl;
        cout<< "Ingrese la posicion del elemento que desea: ";
        cin>> posicion;


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
        }
        cont++;
    }

    *uno /= *dos;
    cout <<  "es la division Asignacion?? "<< *uno<< endl<< endl;
}