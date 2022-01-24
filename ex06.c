/*Faça um programa que leia um valor do tipo double e depois 
o imprima na forma de notação. Veja o que acontece.*/ 
#include <stdio.h>
#include <stdlib.h>
void main() {
    double valor;
    printf ("Digite um valor: ");
    scanf ("%lf", &valor);
    printf ("%.1e", valor);
}