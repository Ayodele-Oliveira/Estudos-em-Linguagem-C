// 6) Escreva um programa para imprimir todos os números pares de o a 500;

#include <stdio.h>
	
	int main(){
		int i;
	
		for (i = 0; i <= 500; i++){
			if ( i % 2 == 0){
				printf("%d\n", i);
			}
		}
	}