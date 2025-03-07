#ifndef __COMPLEJOS_H_
#define __COMPLEJOS_H_

#include <math.h>

typedef float NUM;

typedef struct {
    NUM real;
    NUM imaginario;
} COMPLEJOS;

COMPLEJOS asigna_real(NUM r);
COMPLEJOS asigna_imaginario(NUM j);
NUM parte_real(COMPLEJOS c);
NUM parte_imaginario(COMPLEJOS c);
NUM modulo_complejo(COMPLEJOS c);
COMPLEJOS suma(COMPLEJOS a, COMPLEJOS b);

#endif