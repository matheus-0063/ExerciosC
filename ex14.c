/*Faça um programa que leia três caractereres do tipo char
e depois os imprima um em cada linha. Use um único printf() para isso*/
#include <stdio.h>
#include <stdlib.h>
void main() {
    char a, b, c;
    printf ("Digite tres caracteres: ");
    scanf("%c %c %c", &a, &b, &c);
    printf("%c\n%c\n%c\n", a, b, c);
}