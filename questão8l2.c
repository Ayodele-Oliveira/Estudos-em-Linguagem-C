// 8) Faça um programa que leia um inteiro não-negativo n, determinar o seu fatorial (n!).

#include <stdio.h>
	
	int main(){
		
		int n, i, fatorial = 1;
	
		printf("Informe um número inteiro, por favor: \n\n");
		scanf("%d", &n);
	
		if ( n < 0){
			printf("Por favor informe um número não-negativo!\n");
		}
	
		else if (n == 0){
			printf("O fatorial de %d é 1!\n", n);
		}
	
		else{
			for (i = n; i >= 1; i--){
				fatorial = fatorial * i;
			}
			
			printf("O fatorial de %d é %d!\n", n, fatorial);
		}

	}