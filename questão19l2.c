/*19) Escreva um programa para entrar com vários números positivos e imprimir a
média entre os números digitados. (USAR COMANDO WHILE).*/

#include <stdio.h>

	int main(){
		
		float n, soma = 0;
		int cont = 0;
		
		printf("Informe um número, por gentileza: \n\n");
		scanf("%f", &n);
		
		while(n > 0){
		
			soma = soma + n;
			
			cont++;
			
			printf("Por favor, informe um número: \n\n");
			scanf("%f", &n);
			
		}
	
		printf("A média dos números positivos digitados é: %.2f\n\n", soma/cont);
	}