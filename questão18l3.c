/*18) Escreva um programa que leia valores reais para uma matriz M[4] [5]. Imprima a matriz.
Gerar e imprimir a matriz TRIPLO.*/

#include <stdio.h>

	int main(){
		int l, c, m[4][5], triplo[4][5];
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 5; c++){
				printf("Informe o valor de m[%d][%d]:\n\n", l, c);
				scanf("%d", &m[l][c]);
			}
		}
		for(l = 0; l < 4; l++){
			for(c = 0; c < 5; c++){
				printf("m[%d][%d]: %d\t", l, c, m[l][c]);
				
			}
		}
		
		printf("\n\n");
		for(l = 0; l < 4; l++){
			for(c = 0; c < 5; c++){
				triplo[l][c] = 3 * m[l][c];
			}
		}
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("triplo[%d][%d]: %d\t", l, c, triplo[l][c]);
			}
		}
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("triplos[%d][%d]: %d\t", l, c, triplo[l][c]);
			}
		}
	}