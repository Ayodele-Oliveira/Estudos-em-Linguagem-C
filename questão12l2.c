/* 12) Escreva um programa para entrar com 20 números reais e imprimir a soma
dos positivos e o total de números negativos.*/

#include <stdio.h>

	int main(){
	
		float num, soma = 0;
		int total = 0, i;
		
		for(i = 0; i < 20; i++){
			
			printf("Por favor, .informe um número real: \n");
			scanf("%f", &num);
			
				if (num >= 0 ){
				
					soma = soma + num;
				}
				
				else if ( num < 0){
					total++;
				}
		}
		
		printf("A soma dos números positivos é: %.2f\n\n", soma);
		printf("O número de negatios é: %d\n\n", total);
	}