/*1) Escreva um programa para armazenar 15 números inteiros em um vetor e imprimir uma
listagem numerada contendo o número e uma das mensagens: par ou ímpar.*/


#include <stdio.h>

	int main(){
	
	
		int v[15], i, cont = 0;
		
		for (i = 0; i < 15; i++){
		
			printf("Informe um número por favor: \n\n");
			scanf("%d", &v[i]);
		}
		
		for (i = 0; i < 15; i++){
		
			if(v[i] % 2 == 0){
				cont++;
				printf("%d - o número %d é par!\n", cont, v[i]);
			}
			
			else{
			cont++;
			printf("%d - o número %d é ímpar!\n", cont, v[i]);
			}
		}
	
	}
	