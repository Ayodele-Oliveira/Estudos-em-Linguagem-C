/*13) Escreva um programa para entrar com um número inteiro positivo n, imprimir
os n primeiros naturais pares.
Exemplo: Para n=4, a saída deverá ser 0,2,4,6.*/


#include <stdio.h>

	int main(){
	
		int num, i;
		
		printf("Informe um número inteiro, por favor: \n\n");
		scanf("%d", &num);
		
		for(i = 0; i < 2*num; i++){
		
				if (i % 2 == 0){
					printf("%d\t\n", i);
				}
		}
	
	}