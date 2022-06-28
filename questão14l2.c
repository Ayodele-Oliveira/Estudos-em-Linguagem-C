/*14) Escreva um programa para imprimir os múltiplos de 6, no intervalo de 5 até
300.*/

#include <stdio.h>

	int main(){
	
		int i;
		
		for (i = 5; i <= 300; i++){
			
			if (i % 6 == 0){
			
				printf("%d\n", i);
			}
		
		}
	
	}