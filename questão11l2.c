//11) Escreva um programa para ler 10 números inteiros e imprimir quantos são pares e quantos são ímpares.

#include <stdio.h>
	
	int main(){

	int num, i, pares = 0, impares =  0;
	
	
	for (i = 0; i < 10; i++){
		
		printf("Informe um número, por favor: \n");
		scanf("%d", &num);
		
		if (num % 2 == 0){
			
			pares++;
		}
		else{
			
			impares++;
		}
	}
	
	printf(" %d é(são) par(es) e %d é(são) ímpares!\n\n", pares, impares);
}