/*Escreva um programa que leia um número inteiro 
e depois imprima a mensagem "Valor lido:", seguido
do valor inteiro. Use apenas um comando printf()*/
#include <stdio.h>
#include <stdlib.h>
void main() {
    int num;
    printf ("\nDigite um valor: ");
    scanf ("%d", &num);
    printf ("Valor lido: %d\n", num);
}