/*2) Escreva um programa que leia um vetor com 20 elementos inteiros. Imprima o vetor e
mostre a quantidade de ímpares e a quantidade de pares presentes no vetor.*/

#include <stdio.h>

	int main(){
	
		int v[20], par = 0, impar = 0, i;
		
		for (i = 0; i < 20; i++){
		
			printf("Por favor informe um número inteiro: \n\n");
			scanf("%d", &v[i]);
			
			if( v[i] % 2 == 0){
				par++;
			}
			else{
				impar++;
			}
		}
		
		for (i = 0; i < 20; i++){
		
			printf("v[%d]= %d\n", i, v[i]);
		
		}
	
		printf("A quantidade de pares é %d\n\n", par);
		printf("A quanitidade de ímpares é %d\n\n", impar);
	}