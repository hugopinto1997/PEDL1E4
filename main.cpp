#include <iostream>
#include "cstring"
using namespace std;

char clave[] = "murcielago";


void codificar(char *p){
    while(*p != '\0'){ //mientras no lleguemos al espacio vacio dejado a proposito
        switch(*p){
            case 'm': cout<<0; break;
            case 'u': cout<<1; break;
            case 'r': cout<<2; break;
            case 'c': cout<<3; break;
            case 'i': cout<<4; break;
            case 'e': cout<<5; break;
            case 'l': cout<<6; break;
            case 'a': cout<<7; break;
            case 'g': cout<<8; break;
            case 'o': cout<<9; break;
            default: cout<<*p;
        }
        *(p++);
    }
}

int main() {
    string cadena;
    cout<<"ingrese la cadena: ";
    getline(cin, cadena);

    char *p = new char[cadena.length()+1]; //creamos un puntero tipo char para guardar la cadena
    //aumantamos +1 en length para dejar un espacio nulo y saber cuando termine la cadena

    strcpy(p, cadena.c_str()); //copiamos  la cadena a el puntero p


    codificar(p);
    return 0;
}