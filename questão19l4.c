/*19) Faça um programa que leia e imprima duas matrizes 4x4 de reais e chame uma função que
receba, por parâmetro, as duas matrizes e calcula e imprime o valor da matriz SOMA. Em
seguida, chame outra função que recebe as duas matrizes lidas e retorna o valor da média
aritmética entre todos os elementos das duas matrizes. Imprima o valor de retorno na main().*/

#include <stdio.h>

	void somaAB(float A[][4], float B[][4]);
	float mediaAB(float A[][4], float B[][4]);
	
	int main(){
	
		float A[4][4], B[4][4], media;
		int l,c;
		
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("Elemento A[%d][%d]: \n", l,c);
				scanf("%f", &A[l][c]);
			}
		}
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("Elemento B[%d][%d]: \n", l,c);
				scanf("%f", &B[l][c]);
			}
		}
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("Elemento A[%d][%d]: %.2f\t", l,c, A[l][c]);
				
			}
		}


		printf("\n\n");
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("Elemento B[%d][%d]: %.2f\t", l,c, B[l][c]);
				
			}
		}
		
		somaAB(A,B);
		
		media = mediaAB(A,B);
		
		printf("A média dos elementos é %.2f.\n\n", media);

	}
	
	void somaAB(float A[][4], float B[][4]){
	
		int l,c;
		float soma[4][4];
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				soma[l][c] = A[l][c] + B[l][c];
			}
		}
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				printf("Soma[%d][%d]: %.2f\t",l,c, soma[l][c]);
			}
		}
	
	}
	
	float mediaAB(float A[][4], float B[][4]){
	
		int l,c;
		float soma[4][4], media, som = 0;
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				soma[l][c] = A[l][c] + B[l][c];
			}
		}
		
		for(l = 0; l < 4; l++){
			for(c = 0; c < 4; c++){
				som = som + soma[l][c];
			}
			
			media = som / 16;
			
			return media;
		}
	
	
	}