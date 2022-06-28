/*16) Faça um programa que leia e imprima uma matriz M inteira 5x5 de inteiros. Logo após,
chame uma função que recebe a matriz e imprime todos os elementos que estão em linhas pares
e colunas ímpares.*/

#include <stdio.h>

	void imprimePareImpar(int a[][5]);
	
	int main(){
	
		int a[5][5], l, c;
		
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("Elemento a[%d][%d]: \n", l,c);
				scanf("%d", &a[l][c]);
			}
		}
		
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				printf("Elemento a[%d][%d]: %d\t", l,c, a[l][c]);
				
			}
		}
		
		printf("\n\n");
		
		imprimePareImpar(a);
	
	}
	
	void imprimePareImpar(int a[][5]){
		int l, c;
		
		for(l = 0; l < 5; l++){
			for(c = 0; c < 5; c++){
				if( (l % 2 == 0) && (c % 2 != 0)){
					printf("Elemento a[%d][%d]: %d\n", l,c, a[l][c]);
				
				}
			}
		}
	
	}
	
