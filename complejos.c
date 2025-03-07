#include "complejos.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//asigna un valor real a la parte real
COMPLEJOS asigna_real(NUM r) { 
    COMPLEJOS c;
    c.real = r;
    c.imaginario = 0;
    return c;
}

//asigna un valor imaginario a la parte imaginaria
COMPLEJOS asigna_imaginario(NUM i) { 
    COMPLEJOS c; 
    c.real = 0; 
    c.imaginario = i;
    return c;
}

//devuelve la parte real de un complejo
NUM parte_real(COMPLEJOS c) {  
    return c.real;
}

//devuelve la parte imaginaria de un complejo
NUM parte_imaginario(COMPLEJOS c) {  
    return c.imaginario;
}

//devuelve el valor del modulo de un complejo
NUM modulo_complejo(COMPLEJOS c) { 
    NUM real_sq = c.real * c.real;
    NUM imag_sq = c.imaginario * c.imaginario;
    NUM mod = 0;
    
    mod = sqrt(real_sq + imag_sq);

    return mod;
}

//devuelve la sumatoria de dos complejos
COMPLEJOS suma(COMPLEJOS a, COMPLEJOS b) {  
    COMPLEJOS resultado;
    resultado.real = a.real + b.real;
    resultado.imaginario = a.imaginario + b.imaginario;
    return resultado;
}
