// 4) Escreva um programa para entrar com 10 números inteiros (negativos ou positivos) e imprimir o maior e menor entre os números lidos.

#include <stdio.h>
	
	int main(){
		
		int num, i , maior, menor;
	
		printf("Informe um número inteiro, por favor: \n\n");
		scanf("%d", &num);
	
		maior = num;
		menor = num;
	
		for (i = 0; i < 9; i++){
			if ( num > maior){
				maior = num;
			}
			else if (num < menor){
				menor = num;
			} 
		
			printf("Informe um número inteiro, por favor: \n\n");
			scanf("%d", &num);
		
		}
	
		printf("O maior é: %d\n\n", maior);
		printf("O menor é: %d\n\n", menor);
	
}