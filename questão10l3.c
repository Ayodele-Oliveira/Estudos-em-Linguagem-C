/*10) Faça um programa que leia e imprima um vetor A com 25 números inteiros. Logo após,
substitua todos os valores negativos de A por zero, se existir. Imprima o vetor A alterado.*/

#include <stdio.h>

	int main(){
	
		int i, a[25];
		
		for(i = 0; i < 25; i++){
		
			printf("Informe um número, por favor: \n\n");
			scanf("%d", &a[i]);
		}
		
		for(i = 0; i < 25; i++){
		
			if(a[i] < 0){
			
				a[i] = 0;
			
			}
		}
		
		for(i = 0; i < 25; i++){
		
			printf("%d\n", a[i]);
		}
	}