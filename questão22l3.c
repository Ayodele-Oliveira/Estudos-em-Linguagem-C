/*22) Construa um programa que leia e imprima uma matriz 5x5 de reais e mostre os elementos
de uma determinada coluna da matriz, solicitada via teclado.*/

#include <stdio.h>

	int main(){
		float A[5][5];
		int l, c, h;
		
		for (l = 0; l < 5; l++){
			for (c = 0; c < 5; c++){
				printf("Informe o valor de A[%d][%d]:\n\n", l, c);
				scanf("%f", &A[l][c]);
			}
		}
		for(l = 0; l < 5; l++){
				for(c = 0; c < 5; c++){
				printf("A[%d][%d]: %.2f\t", l, c, A[l][c]);
				
			}
		}
		printf("\n\n");
		
		printf("Por favor, informe a coluna que deseja verificar: \n\n");
		scanf("%d", &h);
		
		for(l = 0; l < 5; l++){
			for (c = h; c < (h + 1); c++)
			
				printf("A[%d][%d]: %.2f\t", l, c, A[l][c]);
	}
}