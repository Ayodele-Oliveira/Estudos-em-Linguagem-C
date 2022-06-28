/*18) Escreva um programa para entrar vários números positivos e imprimir quantos
números foram digitados e a soma deles. (USAR COMANDO WHILE).*/

#include <stdio.h>

	int main(){
	
		int n, cont = 0, soma = 0;
		
		printf(" Informe um número, por favor: \n\n");
		scanf("%d", &n);
		
		while (n > 0){
			
			soma = soma + n;
			
			cont++;
			
			printf("Informe um número, por gentileza: \n\n");
			scanf("%d", &n);
		}
		
		printf("A soma dos números positivos informados são: %d\n\n", soma );
		
		printf("A quantidade de números positivos informados é: %d\n\n", cont);
	}