// 5)Escreva um programa para imprimir todos os números ímpares de 500 até 1.

#include <stdio.h>
	
	int main(){
		
		int i;
	
		for (i = 500; i >=1; i--){
			if (i % 2 != 0){
				printf("%d\n\t", i);
			}
		}

	}