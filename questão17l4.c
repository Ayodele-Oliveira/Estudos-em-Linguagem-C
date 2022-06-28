/*17) Faça um programa que leia e imprima uma matriz B 4x6 de reais e chame uma função que
receba por parâmetro a matriz B e retorna a soma dos elementos da matriz. Imprima o valor
retornado na main().*/

#include <stdio.h>

	float somatorio(float B[][6]);
	
	int main(){
	
		float B[4][6], soma;
		int l, c;
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 6; c++){
				printf("Elemento B[%d][%d]: \n", l,c);
				scanf("%f", &B[l][c]);
			}
		}

		for(l = 0; l < 4; l++){
			for(c = 0; c < 6; c++){
				printf("Elemento B[%d][%d]: %.2f\t", l,c, B[l][c]);
				
			}
		}
		
		soma = somatorio(B);
		
		printf("A soma dos elementos de B é %.2f.\n\n", soma);
	}
	
	float somatorio(float B[][6]){
		int l, c;
		float soma = 0;
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 6; c++){
				soma = soma + B[l][c];
			}
		}
		
		return soma;
		
		
	}