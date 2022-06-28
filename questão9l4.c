/*9) Escreva um programa que leia um vetor de inteiros e chame uma função que calcule e retorne
a soma dos elementos positivos do vetor. Imprima o valor de retorno na main().*/

#include <stdio.h>
#define M 10

	int somaVetor(int A[], int tamA);

	int main(){
		int A[M], soma, i;
		
		for(i = 0; i < M; i++){
			printf("O elemento A[%d]: \n\n", i);
			scanf("%d", &A[i]);
		}
		
		soma = somaVetor(A, M);
		
		printf("A soma de A é: %d\n\n", soma);
	}
	
	int somaVetor(int A[], int tamA){
		int i, soma = 0;
		
		for(i = 0; i < tamA; i++){
			if(A[i] > 0){
				soma = soma + A[i];
			}
		}
		
		return soma;
		
	}