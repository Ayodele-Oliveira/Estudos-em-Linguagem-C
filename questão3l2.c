// Escreva um programa que imprima os números de 1 a 100, sua soma e a média entre eles.


#include <stdio.h>
	
	int main(){
		
		int i, soma = 0;
	
		for (i = 1; i <= 100; i++){
			printf("%d\n\t", i);
			
			soma = soma + i;
		}

		printf("A soma dos números é: %d\n\n", soma);
	
		printf("A média dos números é: %.2f\n\n", soma / 100.0);
	}