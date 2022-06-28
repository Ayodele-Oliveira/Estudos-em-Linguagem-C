/*7) Faça um programa que leia dois números inteiros e imprimir a soma. Antes do
resultado, deverá aparecer a mensagem: SOMA.*/

#include <stdio.h>
	
	int main(){

		int num1, num2;
	
		printf("Insira dois números inteiros, por favor: \n");
		scanf("%d,%d", &num1, &num2);
	
		printf("SOMA: %d\n", num1 + num2);

}