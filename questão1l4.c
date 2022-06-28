/*1) Faça um programa que leia três números inteiros e chame a função que recebe os três
números, calcula e retornar o valor da soma entre os três números. Ao retornar, imprima o valor
de retorno na tela.*/

#include <stdio.h>
	
	int somaNum(int a, int b, int c){
		int somat;
		
		somat = a + b + c;
		
		return somat;
	}

	int main(){
		int a, b, c, soma;
		
		printf("Por favor, informe 3 números: \n\n");
		scanf("%d, %d, %d", &a, &b, &c);
		
		soma = somaNum(a,b,c);
		
		printf("A soma de a + b + c é: %d\n", soma);
	}