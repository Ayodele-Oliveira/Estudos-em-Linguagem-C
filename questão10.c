/*10) Escreva um programa que leia um número inteiro e imprima o valor do seu antecessor e
do seu sucessor (use operadores de incremento e decremento).*/

#include <stdio.h>
	
	int main(){

	int num;
	
	printf("Informe um número, por favor: \n");
	scanf("%d", &num);
	
	printf("O antecessor é: %d\n", --num);
	num++;
	printf("O sucessor é: %d\n", num++);
}