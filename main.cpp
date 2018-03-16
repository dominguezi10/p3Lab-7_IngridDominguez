#include <iostream>
#include "Racional.h"
using namespace std;

// prototipos
int menu();

//suma
void suma();

int main(){
    int opcion = 0;

    while(opcion !=10){
        opcion = menu();
        switch(opcion){
            case 1: {
                    cout<< "uno" << endl;
            };
            break;

            case 2:{

            };
            break;

            case 3:{

            };
            break;

            case 4: {

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
        cout<< "1.- Suma"<< endl <<"2.-Suma y asignacion"<< endl <<"3.- Resta"<<endl << "4.- Resta y asignacion"<< endl;
        cout<< "5.-Multiplicaciòn "<< endl << "6.-Multiplicacion y asignacion"<< endl <<"7.- Division" << endl;
        cout<< "8.-Division y asignacion" << endl <<"9.- Guardar" << endl <<"10.-Salir" << endl;
        cin>> opcion;
    }

    cout<< "esto salio" << opcion << endl;
    return opcion;
}

void suma(){

}