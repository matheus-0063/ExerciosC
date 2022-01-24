/*Elabore um programa que solicite ao usuário entra com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\)*/
#include <stdio.h>
#include <stdlib.h>

void main() {
    int dia, mes, ano;
    printf("Digite um dia de 01 a 32: ");
    scanf("%d", &dia);
    printf("Digite um mes de 01 a 12: ");
    scanf("%d", &mes);
    printf("Digite um  ano: ");
    scanf("%d", &ano);
    printf ("%.2d\\%.2d\\%d", dia, mes, ano);
}