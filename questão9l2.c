// 9)Escreva um programa para entrar com 15 números reais e imprimir a soma e a média desses números.

#include <stdio.h>
	
	int main(){
		
		int i;
		float n, soma = 0;
		
		for (i = 0; i < 15; i++){
	
			printf("Informe um número, por favor.");
			scanf("%f", &n);
			
			soma = soma + n;
		}
	
		printf("A soma dos números é %.2f\n\n", soma);
		printf("A média dos números é %.2f\n\n", soma / 15);	
	
	}