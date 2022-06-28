/*19) Escreva um programa para entrar com valores inteiros para uma matriz A[4] [4] e para
uma matriz B[4] [4]. Imprima as matrizes A e B. Gerar e imprimir a matriz SOMA.*/

#include <stdio.h>

	int main(){
		int A[4][4], B[4][4], l, c, soma[4][4];
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("Informe o valor de A[%d][%d]:\n\n", l, c);
				scanf("%d", &A[l][c]);
			}
		}
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("Informe o valor de B[%d][%d]:\n\n", l, c);
				scanf("%d", &B[l][c]);
			}
		}
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("A[%d][%d]: %d\t", l, c, A[l][c]);
				
			}
		}
		printf("\n\n");
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("B[%d][%d]: %d\t", l, c, B[l][c]);
				
			}
		}
		printf("\n\n");
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				soma[l][c] = A[l][c] + B[l][c];
			}
		}
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("soma[%d][%d]: %d\t", l, c, soma[l][c]);
			}
	}
}