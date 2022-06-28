/*7) Escreva um programa para entrar com números reais para dois vetores A e B de 10
elementos cada. Gerar e imprimir o vetor soma e o vetor diferença entre eles.*/

#include <stdio.h>

	 int main(){
	 
	 	float a[10], b[10], s[10], d[10];
		int i;
		
		for(i = 0; i < 10; i++){
			printf("Informe um número, por favor: \n\n");
			scanf("%f", &a[i]);
		}
		
		for(i = 0; i < 10; i++){
			printf("Informe um número, por favor: \n\n");
			scanf("%f", &b[i]);
		}
		
		for(i = 0; i < 10; i++){
			s[i] = a[i] + b[i];
			d[i] = a[i] - b[i];
 		}
		for(i = 0; i < 10; i++){
			printf("O vetor soma de a[%d] e b[%d] é: %.2f\n", i, i, s[i]);
			printf("O vetor diferença de a[%d] e b[%d] é: %.2f\n", i, i, d[i]);
 		}
	 
	 }