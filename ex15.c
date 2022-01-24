/*Escreva um programa que leia três variáveis: char, int e float. Em seguida,
imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal
e uma em cada linha. Use um único comando printf() para cada operação de escrita das três 
variáveis*/
#include <stdlib.h>
#include <stdio.h>

void main() {
    int var1;
    char var2;
    float var3;
    printf("\nDigite um inteiro: ");
    scanf("%d", &var1);
    printf("\nDigite um caractere: ");
    scanf(" %c", &var2);
    printf("\nDigite um valor flutuante: ");
    scanf("%f", &var3);
    printf("%d %c %f\n%d\t%c\t%f\n%d\n%c\n%f", var1, var2, var3, var1, var2, var3, var1, var2, var3);
}