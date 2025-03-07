#include <stdio.h>
#include "complejos.h"
#include <math.h>

int main(){
    
    //asigna valores de complejos
    COMPLEJOS c, d, e, f; 
    c = asigna_real(4);
    d = asigna_imaginario(2);
    printf("Nuevo complejo: %.1f+(%.1f)i\n", c.real, d.imaginario);
    
    //parte real, parte imaginaria
    NUM REAL = parte_real(c);
    NUM IMAGINARIO = parte_imaginario(c);

   //suma complejos
    COMPLEJOS resultado;
    printf("sumaremos dos numeros complejos\n");
    printf("Escribe la parte real e imaginaria del primer complejo:\n");
    scanf("%f %f", &e.real, &e.imaginario);
    printf("Escribe la parte real e imaginaria del segundo complejo:\n");
    scanf("%f %f", &f.real, &f.imaginario);

    resultado = suma(e, f);
    printf("El resultado es: %.2f + %.2fi\n", resultado.real, resultado.imaginario);

    //modulo complejos
    NUM modulo;
    
    printf("calcularemos el modulo de un complejo\n");
    printf("Escribe la parte real e imaginaria del complejo:\n");
    scanf("%f %f", &e.real, &e.imaginario);

    modulo = modulo_complejo(e);
    printf("El modulo del complejo es: %.2f\n", modulo);

    return 0;
}