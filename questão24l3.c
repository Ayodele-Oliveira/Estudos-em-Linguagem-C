/*24) Faça um programa que leia e imprima três matrizes 3X2 de reais. Em seguida, calcule a
média entre os elementos das três matrizes. Imprima o valor da média.*/

#include <stdio.h>

	int main(){
	
		int A[3][2], B[3][2], C[3][2], l, c;
		float media[3][2];
		
		for (l = 0; l < 3; l++){
			for (c = 0; c < 2; c++){
				printf("Informe o valor de A[%d][%d]:\n\n", l, c);
				scanf("%d", &A[l][c]);
			}
		}
		for(l = 0; l < 3; l++){
				for(c = 0; c < 2; c++){
				printf("A[%d][%d]: %d\t", l, c, A[l][c]);
				
			}
		}
		printf("\n\n");
		for (l = 0; l < 3; l++){
			for (c = 0; c < 2; c++){
				printf("Informe o valor de B[%d][%d]:\n\n", l, c);
				scanf("%d", &B[l][c]);
			}
		}
		for(l = 0; l < 3; l++){
				for(c = 0; c < 2; c++){
				printf("B[%d][%d]: %d\t", l, c, B[l][c]);
				
			}
		}
		printf("\n\n");
		for (l = 0; l < 3; l++){
			for (c = 0; c < 2; c++){
				printf("Informe o valor de C[%d][%d]:\n\n", l, c);
				scanf("%d", &C[l][c]);
			}
		}
		for(l = 0; l < 3; l++){
				for(c = 0; c < 2; c++){
					printf("C[%d][%d]: %d\t", l, c, C[l][c]);
				
			}
		}
		printf("\n\n");
		for (l = 0; l < 3; l++){
			for (c = 0; c < 2; c++){
				media[l][c] = (A[l][c] + B[l][c] + C[l][c])/3.0;
			}
		}
		for (l = 0; l < 3; l++){
			for (c = 0; c < 2; c++){
				printf("média[%d][%d]: %.2fs\t", l, c, media[l][c]);
			}
		}
		
	
	}