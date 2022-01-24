/* Faça um programa que leia um caractere do tipo char e depois o
imprima entre aspas duplas. Assim, se o caractere lido for a
letra A, deverá se impresso "A"*/
#include <stdlib.h>
#include <stdio.h>

void main() {
    char caract;
    printf("Digite um caractere: ");
    scanf("%c", &caract);
    printf ("\"%c\"", caract);
}