// 7) Escreva um programa que leia um número positivo n (inteiro), imprimir os n primeiros naturais ímpares.

#include <stdio.h>
	
	int main(){
		
		int n, i;
	
		printf("Informe um número inteiro, por favor: \n\n");
		scanf("%d", &n);
		
		for(i = 0; i <= n * 2 ; i++){
			if(i % 2 != 0){
				printf("%d\t\n\n", i);
			}
		}
	}