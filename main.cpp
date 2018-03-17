#include <iostream>
#include "Racional.h"
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

// prototipos
int menu();
//guardar
void guardar(string);
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
    //ifstream file("laberinto.txt"); 
    int opcion = 0;
    while(opcion !=10){
        opcion = menu();
        switch(opcion){
            
            case 1: {
                if(lasFraciones.size()>1){
                    suma();
                }else{
                    cout<< "necesita crear antes al menos 2"<< endl << endl;
                }
            };
                    
            
            break;

            case 2:{
                if(lasFraciones.size()>1){
                    resta();
                }else{
                    cout<< "necesita crear antes al menos 2"<< endl << endl;
                }
                
            };
            break;

            case 3:{
                if(lasFraciones.size()>1){
                    multiplicacion();
                }else{
                    cout<< "necesita crear antes al menos 2"<< endl << endl;
                }
                
                    
            };
            break;

            case 4: {
                if(lasFraciones.size()>1){
                    division();
                }else{
                    cout<< "necesita crear antes al menos 2"<< endl << endl;
                }
            };
            break;

            case 5:{
                if(lasFraciones.size()>1){
                    sumaAsignacion();
                }else{
                    cout<< "necesita crear antes al menos 2"<< endl << endl;
                }
                    
            };
            break;

            case 6:{
                if(lasFraciones.size()>1){
                    restaAsignacion();
                }else{
                    cout<< "necesita crear antes al menos 2"<< endl << endl;
                }
                    
            };
            break;

            case 7: {
                if(lasFraciones.size()>1){
                    multiplicacionAsignacion();;
                }else{
                    cout<< "necesita crear antes al menos 2"<< endl << endl;
                }
                    
            };
            break;

            case 8:{
                if(lasFraciones.size()>1){
                    divisionAsignacion();;
                }else{
                    cout<< "necesita crear antes al menos 2"<< endl << endl;
                }
                    
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

void guardar(string salida){
    ofstream fichero("operaciones.txt", ios::app );
    fichero << salida << endl;
    
    //fichero.close();
}

void suma(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- SUMA -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i] << endl;
    }

    
    while(cont<=2){
        int posicion = 100;
        while(posicion> lasFraciones.size() || posicion<=0){
            cout<< "Elemento: "<< cont << endl;
            cout<< "Ingrese la posicion del elemento que desea: ";
            cin>> posicion;
        }


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
        }
        cont++;
    }

    const Racional* suma;
    suma= *uno + *dos;
    cout <<  "es la suma?? "<< *suma<< endl;

    stringstream salida;
    salida<<  *uno << " + "<< *dos<< " = " << *suma;
    string aConcatenar= salida.str();
    cout<< aConcatenar << endl<< endl;
    guardar(aConcatenar);

}

void resta(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- Resta -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i] << endl;
    }

    
    while(cont<=2){
        int posicion = 100;
        while(posicion> lasFraciones.size() || posicion<=0){
            cout<< "Elemento: "<< cont << endl;
            cout<< "Ingrese la posicion del elemento que desea: ";
            cin>> posicion;
        }


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
        }
        cont++;
    }

    const Racional* resta;
    resta= *uno - *dos;
    cout <<  "es la resta?? "<< *resta<< endl<< endl;
    stringstream salida;
    salida<<  *uno << " - "<< *dos<< " = " << *resta;
    string aConcatenar= salida.str();
    cout<< aConcatenar << endl<< endl;
    guardar(aConcatenar);
}

void multiplicacion(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- Multiplicacion -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i] << endl;
    }

    
    while(cont<=2){
        int posicion = 100;
        while(posicion> lasFraciones.size() || posicion<=0){
            cout<< "Elemento: "<< cont << endl;
            cout<< "Ingrese la posicion del elemento que desea: ";
            cin>> posicion;
        }


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
        }
        cont++;
    }

    const Racional* multiplicacion;
    multiplicacion= (*uno) * (*dos);
    cout <<  "es la multiplicacion?? "<< *multiplicacion<< endl<< endl;
    stringstream salida;
    salida<<  *uno << " * "<< *dos<< " = " << *multiplicacion;
    string aConcatenar= salida.str();
    cout<< aConcatenar << endl<< endl;
    guardar(aConcatenar);
}

void division(){
    int cont = 1;
    const Racional *uno;
    const Racional *dos;

    cout<< "---------------- Division -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i] << endl;
    }

    
    while(cont<=2){
        int posicion = 100;
        while(posicion> lasFraciones.size() || posicion<=0){
            cout<< "Elemento: "<< cont << endl;
            cout<< "Ingrese la posicion del elemento que desea: ";
            cin>> posicion;
        }


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
    stringstream salida;
    salida<<  *uno << " / "<< *dos<< " = " << *division;
    string aConcatenar= salida.str();
    cout<< aConcatenar << endl<< endl;
    guardar(aConcatenar);
}


void sumaAsignacion(){
    int cont = 1;
     Racional *uno;
    const Racional *dos;

    stringstream salida;
    cout<< "---------------- SUMA ASIGANACION -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i] << endl;
    }

    
    while(cont<=2){
        int posicion = 100;
        while(posicion> lasFraciones.size() || posicion<=0){
            cout<< "Elemento: "<< cont << endl;
            cout<< "Ingrese la posicion del elemento que desea: ";
            cin>> posicion;
        }


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
            salida << *uno;
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
        }
        cont++;
    }

    *uno += *dos;
    cout <<  "es la suma Asignacion?? "<< *uno<< endl<< endl;
    
    
    salida<< " += "<< *dos<< " = " << *uno;
    string aConcatenar= salida.str();
    cout<< aConcatenar << endl<< endl;
    guardar(aConcatenar);
}

void restaAsignacion(){
    int cont = 1;
    Racional *uno;
    const Racional *dos;
    stringstream salida;
    cout<< "---------------- RESTA ASIGANCION -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i] << endl;
    }

    
    while(cont<=2){
        int posicion = 100;
        while(posicion> lasFraciones.size() || posicion<=0){
            cout<< "Elemento: "<< cont << endl;
            cout<< "Ingrese la posicion del elemento que desea: ";
            cin>> posicion;
        }


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
            salida << *uno;
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
        }
        cont++;
    }

    *uno -= *dos;
    cout <<  "es la resta Asignacion?? "<< *uno<< endl<< endl;
    salida<< " -= "<< *dos<< " = " << *uno;
    string aConcatenar= salida.str();
    cout<< aConcatenar << endl<< endl;
    guardar(aConcatenar);
}

void multiplicacionAsignacion(){
    int cont = 1;
    Racional *uno;
    const Racional *dos;
    stringstream salida;
    cout<< "---------------- MULTIPLICACION ASIGNACION -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i] << endl;
    }

    
    while(cont<=2){
        int posicion = 100;
        while(posicion> lasFraciones.size() || posicion<=0){
            cout<< "Elemento: "<< cont << endl;
            cout<< "Ingrese la posicion del elemento que desea: ";
            cin>> posicion;
        }

        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
            salida<< *uno;
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
        }
        cont++;
    }

    *uno *= *dos;
    cout <<  "es la mutiplicacion Asignacion?? "<< *uno<< endl<< endl;
    
    salida<< " *= "<< *dos<< " = " << *uno;
    string aConcatenar= salida.str();
    cout<< aConcatenar << endl<< endl;
    guardar(aConcatenar);
}

void divisionAsignacion(){
    int cont = 1;
    Racional *uno;
    const Racional *dos;
    stringstream salida;
    cout<< "---------------- DIVISION ASIGNACION -----------"<< endl;
    for(int i =0; i<lasFraciones.size(); i++){
        cout<< (i+1)<< "- "<< *lasFraciones[i] << endl;
    }

    
    while(cont<=2){
        int posicion = 100;
        while(posicion> lasFraciones.size() || posicion<=0){
            cout<< "Elemento: "<< cont << endl;
            cout<< "Ingrese la posicion del elemento que desea: ";
            cin>> posicion;
        }


        if(cont == 1){
            uno = lasFraciones[ (posicion-1)];
            salida<< *uno;
        }else  if(cont== 2){
            dos = lasFraciones[ (posicion-1)];
        }
        cont++;
    }

    *uno /= *dos;
    cout <<  "es la division Asignacion?? "<< *uno<< endl<< endl;
    salida<< " /= "<< *dos<< " = " << *uno;
    string aConcatenar= salida.str();
    cout<< aConcatenar << endl<< endl;
    guardar(aConcatenar);
}