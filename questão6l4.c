/*6) Escreva um programa que leia e imprima um vetor de inteiros e chame uma função que
receba um vetor de inteiros e seu tamanho e retorne o menor dos elementos do vetor. Imprima o
valor de retorno da função na main().*/

#include <stdio.h>

	int menorNum(int a[], int tam){
		int i, menor = a[0];
		
		for(i = 0; i < 10; i++){
			if(a[i] < menor){
				menor = a[i];
			}
		}
		
		return menor;
	}
	int main(){
	
		int a[10], i, menor;
		
		for(i = 0; i < 10; i++){
			printf("O elemento a[%d]: \n\n", i);
			scanf("%d", &a[i]);
		}
		
		for(i = 0; i < 10; i++){
			printf("a[%d] = %d\t", i, a[i]);

		}
		
		printf("\n\n");
		
		menor = menorNum(a, 10);
		
		printf("O menor é %d\n\n", menor);
		
	}
	