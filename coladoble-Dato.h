//clase Nodo 


#pragma once 
#include "Dato.h"
class Nodo {
public:
    Dato dato;
    Nodo* next;
    Nodo* prev;

    Nodo() { //Constructor de la clase
        next = NULL;
        prev = NULL;
    }
};
