/*20) Escreva um programa para entrar com valores para duas matrizes 5x5 de inteiros. Imprima
as matrizes. Gerar e imprimir a matriz DIFERENÇA.*/

#include <stdio.h>

	int main(){
		int A[5][5], B[5][5], dif[5][5], l, c;
		
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("Informe o valor de A[%d][%d]:\n\n", l, c);
				scanf("%d", &A[l][c]);
			}
		}
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("Informe o valor de B[%d][%d]:\n\n", l, c);
				scanf("%d", &B[l][c]);
			}
		}
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("A[%d][%d]: %d\t", l, c, A[l][c]);
				
			}
		}
		printf("\n\n");
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("B[%d][%d]: %d\t", l, c, B[l][c]);
				
			}
		}
		printf("\n\n");
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				dif[l][c] = A[l][c] - B[l][c];
			}
		}
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("diferença[%d][%d]: %d\t", l, c, dif[l][c]);
			}
	}
	}