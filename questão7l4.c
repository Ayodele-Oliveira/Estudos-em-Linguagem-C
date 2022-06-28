/*7) Escreva um programa que leia dois vetores de inteiros de mesmo tamanho e chame uma
função que receba dois vetores e o tamanho dos vetores como parâmetros. A função deverá
retornar o produto interno dos dois vetores. Ex: V={1, 2, 3} e W={4, 5, 6}, o produto interno
será: 1*4+2*5+3*6=32. Imprima o valor de retorno na main().*/

#include <stdio.h>
#define M 10

	int produtoInterno(int A[], int B[], int tamA);

	int main(){
		int A[M], B[M], i, prod;
		
		for(i = 0; i < M; i++){
			printf("O elemento A[%d]: \n\n", i);
			scanf("%d", &A[i]);
		}
		for(i = 0; i < M; i++){
			printf("O elemento B[%d]: \n\n", i);
			scanf("%d", &B[i]);
		}
		prod = produtoInterno(A, B, M);
		
		printf("O produto interno de A e B é: %d\n\n", prod);
	}
	
	int produtoInterno(int A[], int B[], int tamA){
		int i, produto = 0;
		
		for(i = 0; i < tamA; i++){
			produto = produto + (A[i] * B[i]);
		
		}
		
		return produto;
	
	}