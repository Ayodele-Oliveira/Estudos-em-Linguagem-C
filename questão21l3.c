/*21) Escreva um programa para ler valores inteiros para a matriz A[3][5] . Imprimir a matriz.
Gerar e imprimir o vetor SOMA_LINHA, onde cada elemento é a soma dos elementos de uma
linha da matriz A.*/

#include <stdio.h>

	int main(){
		int A[3][5], l, c, soma[3][1];
		for(l = 0; l < 3; l++){
			for(c = 0; c < 5; c++){
				printf("Informe o valor de A[%d][%d]:\n\n", l, c);
				scanf("%d", &A[l][c]);
			}
		}
			for(l = 0; l < 3; l++){
				for(c = 0; c < 5; c++){
				printf("A[%d][%d]: %d\t", l, c, A[l][c]);
				
			}
		}
		printf("\n\n");
		for(l = 0; l < 3; l++){
			for(c = 0; c < 5; c++){
				soma[l][0] = soma[l][0] + A[l][c];
			}
		}
		for(l = 0; l < 3; l++){
				for(c = 0; c < 1 ; c++){
				printf("soma[%d][%d]: %d\t", l, c, soma[l][c]);
				
			}
	}
	
	}