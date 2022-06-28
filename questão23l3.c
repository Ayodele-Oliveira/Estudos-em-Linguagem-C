/*23) Faça um programa que leia e imprima uma matriz 4X5 de inteiros. Em seguida, mostre o
maior elemento e o menor elemento presente na matriz.*/

#include <stdio.h>

	int main(){
		int A[4][5], l, c, maior, menor;
		
		for (l = 0; l < 4; l++){
			for (c = 0; c < 5; c++){
				printf("Informe o valor de A[%d][%d]:\n\n", l, c);
				scanf("%d", &A[l][c]);
			}
		}
		for(l = 0; l < 4; l++){
				for(c = 0; c < 5; c++){
				printf("A[%d][%d]: %d\t", l, c, A[l][c]);
				
			}
		}
		printf("\n\n");
		
		maior = A[0][0];
		menor = A[0][0];
		
		for (l = 0; l < 4; l++){
			for (c = 0; c < 5; c++){
				if(A[l][c] > maior){
					maior = A[l][c];
				}
				if(A[l][c] < menor){
					menor = A[l][c];
				}
			}
		}
		
		printf("O maior é: %d\n\n", maior);
		printf("O menor é: %d\n\n", menor);
	}