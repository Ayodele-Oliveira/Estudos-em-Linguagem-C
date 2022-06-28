/*17) Escreva um programa para entrar com vários números e imprimir o triplo de
cada número. O programa acaba quando entrar o número -999. (USAR
COMANDO WHILE).*/

#include <stdio.h> 

	int main(){
	
		int n, triplo;
	
		printf("Informe um número, por favor: \n\n");
		scanf("%d", &n);
		
		while (n != (-999)){
		
			triplo = n * 3;
			
			printf("O triplo do número é %d.\n\n", triplo);
			
			printf("Informe um número, por favor: \n\n");
			scanf("%d", &n);
		}
	
	
	}