/*Faça um programa que leia dois números inteiros e depois 
os imprima na ordem inversa em que eles foram lidos.*/
#include <stdio.h>
#include <stdlib.h>
void main() {
    int num1, num2;
    printf("\nDigite um inteiro: ");
    scanf("%d", &num1);
    printf("\nDigite outro inteiro: ");
    scanf("%d", &num2);
    printf("%d\t%d",num2, num1);
}