/*5) Escreva um programa que leia e imprima um vetor de inteiros e chame uma função que
receba um vetor de inteiros e seu tamanho e retorne o maior dos elementos do vetor. Imprima o
valor de retorno da função na main().*/

#include <stdio.h>

	int maiorNum(int a[],int tam){
		int i, maior = a[0];
		
		for(i = 0; i < tam; i++){
			 if (a[i] > maior){
			 	maior = a[i];
			 }
		
		}
		
		return maior;
	}
	int main(){
	
		int a[15], i, maior; 
		
		for(i = 0; i < 15; i++){
			printf("Informe o a[%d]:\n", i);
			scanf("%d", &a[i]);
		}
		
		for(i = 0; i < 15; i++){
			printf("a[%d]: %d\t", i, a[i]);
			
		}
		printf("\n\n");
		
		maior = maiorNum(a, 15);
		
		printf("O maior é o %d\n", maior);
	}