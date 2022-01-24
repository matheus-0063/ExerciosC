/*Faça um programa que leia um valor do tipo float e 
depois o imprima usando o operador "%d". Veja o que acontece.*/
#include <stdio.h>
#include <stdlib.h>
void main() {
    float num;
    printf ("Digite um valor: ");
    scanf ("%f", &num);
    printf ("%d", num);
}