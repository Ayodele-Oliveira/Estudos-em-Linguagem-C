/*11) Escreva um programa que leia uma string e chame uma função que recebe uma string e
conta quantos caracteres a string possui. (Não é para usar a função strlen()). Imprima o valor de
retorno da função na main().*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


	int contaTamanho(char a[]);

	int main(){
	
		char a[100], tam;
		
		
		printf("Por favor, informe uma frase:\n\n");
		gets(a);
		
		tam = contaTamanho(a);
		
		printf("O número de caracteres é %d\n\n", tam);
	}
	
	int contaTamanho(char a[]){
		
		int i = 0 ;
		
		do{
			i++;
		}
		while(a[i] != '\0');	
	
		return i;
	}