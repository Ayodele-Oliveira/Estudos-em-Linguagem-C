/*9) Faça um programa que leia e imprima um vetor A de tamanho 15 de inteiros positivos. Logo
após, gere o vetor B contendo o somatório (de 1 até o número) de cada elemento de A.
Imprima o vetor B.*/

#include <stdio.h>

	int main(){
	
		int a[15], b[15], i, c, soma;
	
		for(i = 0; i < 15; i++){
	
			printf("Informe um número, por favor: \n\n");
			scanf("%d", &a[i]);
		}
		for(i = 0; i < 15; i++){
			soma = 0;
			for(c =  0; c <= a[i]; c++){
				soma = soma + c;
			
			}
			
			b[i] = soma;
		}
		
		for(i = 0; i < 15; i++){
	
			printf("O vetors somatório é: %d\n", b[i]);
			
		}
		
	
	}