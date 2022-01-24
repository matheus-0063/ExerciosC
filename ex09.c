/*Faça um programa que leia dois valores do tipo float. Use um
único comando de leitura de leitura para isso. Em seguida, imprima os valores
lidos na ordem inversa em que eles foram lidos*/
#include <stdio.h>
#include <stdlib.h>

void main() {
    float num1, num2;
    printf("\nDigite dois valores: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f\t%.2f",num2, num1);
}