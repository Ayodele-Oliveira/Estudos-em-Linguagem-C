/*4) Escreva um programa que leia imprima dois vetores de 10 elementos inteiros e gere o vetor produto entre os dois vetores lidos. Mostre o vetor resultante.*/


#include <stdio.h>

	int main(){
	
		int v[10], w[10], z[10], i;
		
		for (i = 0; i < 10; i++){
		
			printf("Informe um número, por favor: \n\n");
			scanf("%d", &v[i]);
		}
		
		for (i = 0; i < 10; i++){
		
			printf("Informe um número, por favor: \n\n");
			scanf("%d", &w[i]);
		}
		
		for (i = 0; i < 10; i++){
			
			z[i] = v[i] * w [i];
		}
		
		for (i = 0; i < 10; i++){
			
			printf("O produto de v[%d] por w[%d] é %d\n\n", i, i, z[i]);
		}
	}
	
	