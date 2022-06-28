/*4) Faça um programa que leia dois números inteiros e chame uma função que verifique se um
número é divisível por outro.*/

#include <stdio.h>

	void divisores(int a, int b){
		if (a % b == 0){
			printf("A é divisível por B\n");
		}
		if (b % a == 0){
			printf("B é divisível por A\n");
		}
		else{
			printf("Não são divísiveis");
		}
	}
	
	//verificar erro de floating  pointing exception;

	int main(){
		int a, b;
		
		printf("Por favor, informe dois números inteiros: \n\n");
		scanf("%d, %d", &a, &b);
		
		divisores(a, b);
		
	}
	
	