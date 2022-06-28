/*8) Faça um programa que leia um conjunto de 30 valores inteiros, armazene-os em um vetor e
imprima-os ao contrário da ordem de leitura.*/

#include <stdio.h>

	int main(){
	
	int i, v[30];
	
	for(i = 0; i < 30; i++){
		printf("Informe um número, por favor: \n");
		scanf("%d", &v[i]);
	}
	for(i = 29; i >= 0; i--){
		printf("v[%d]=%d\n", i, v[i]);
	}
	
	
	}