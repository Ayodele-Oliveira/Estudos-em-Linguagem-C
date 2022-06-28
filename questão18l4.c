/*18) Faça um programa que leia e imprima uma matriz A 5x5 de reais e chame uma função que
receba por parâmetro a matriz A e retorna a média aritmética dos elementos abaixo da diagonal
principal. Imprima o valor retornado na main().*/

#include <stdio.h>

	float mediaA(float A[][5]);
	
	int main(){
		float A[5][5], media;
		int l,c;
		
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("Elemento A[%d][%d]: \n", l,c);
				scanf("%f", &A[l][c]);
			}
		}
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("Elemento A[%d][%d]: %.2f\t", l,c, A[l][c]);
				
			}
		}

		media = mediaA(A);
		
		printf("A media dos elementos abaixo da diagonal principal é: %.2f.\n\n", media);
	}
	float mediaA(float A[][5]){
		
		float soma = 0, media;
		int i = 0,l, c;
	
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				if(l > c){
					
					printf("A[%d][%d]\n", l, c);
					soma = soma + A[l][c];
					i++;
					
				}
				
			}
		}
		media = soma / i;
		
		return media;
	
	}