/*13) Escreva um programa que leia um número inteiro n e chame uma função que calcule e retorna a soma dos primeiros n cubos: S(n) = 1³ + 2³ + ... + n³ . Imprima o valor de retorno na main().*/

#include <stdio.h>
#include <math.h>

	int somaCubo(int num);
	
	int main(){
	
		int n, soma;
		
		printf("Por favor, informe um número inteiro: \n\n");
		scanf("%d", &n);
		
		soma = somaCubo(n);
		
		printf("A soma do %d primeiros é %d.\n\n", n, soma);
	}
	
	int somaCubo(int num){
			int i, soma = 0;
			
			for (i = 0; i <= num; i++){
			
				soma = soma + (i * i * i);
			
			}
			
			return soma;
	}