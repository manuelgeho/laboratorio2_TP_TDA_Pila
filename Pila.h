#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

typedef struct
{
    int arreglo[50];
    int tope;
}Pila;

void inicpila (Pila*);
void apilar (Pila*, int);
void desapilar (Pila*);
int pilavacia(Pila);
int tope (Pila);



#endif // PILA_H_INCLUDED
