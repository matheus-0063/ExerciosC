/*Faça um programa que leia um valor inteiro e depois o imprima usando o
operador "%f". Veja o que acontece.*/
#include <stdlib.h>
#include <stdio.h>
void main() {
    int num;
    printf ("\nDigite um valor: ");
    scanf("%d", &num);
    printf ("%f", num);
}