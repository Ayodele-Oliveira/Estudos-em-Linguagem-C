/*3) Faça um programa que leia um número inteiro positivo e chame uma função que recebe o
número e calcule o valor do fatorial do número e retorne o valor. Imprima o valor de retorno da
função na main().*/

#include <stdio.h>

	int fatorial(int a){
		int i, fator = 1;
		
		for(i = 1; i <= a; i++){
			fator = fator * i;
			
		}
		
		return fator;
	}
	int main(){
		int a, fat;
		
		printf("Por favor, informe um número inteiro: \n\n");
		scanf("%d", &a);
		if (a > 0){
			fat = fatorial(a);
		}
		else{
			printf("Por favor, informe um número positivo!\n\n");
		}
		printf("O fatorial é %d\n\n", fat);
	}