/*10) Escreva um programa que leia uma string e chame uma função para contar o número de
caracteres maiúsculos a string possui. Imprima o valor de retorno da função na main().*/
#include<stdio.h>
#include <string.h>
#include <ctype.h>

	int contaMaiuscula(char a[], char b[], int tam);
	
	int main(){
	
		char a[100],  b[100];
		int tam, i, m;
		
		printf("Informe uma frase, por favor: \n\n");
		gets(a);
		
		tam = strlen(a);
		strcpy(b,a);
		for(i = 0; i < tam; i++){
		
				b[i] = toupper(a[i]);
			
		}
		
		m = contaMaiuscula(a, b, tam);
		
		printf("O número de maiúsculas é: %d\n\n", m);
	}
	
	int contaMaiuscula(char a[], char b[], int tam){
		
		int i, m = 0;
		
		for(i = 0; i < tam; i++){
		
				if(a[i] == b[i] && a[i] != ' '){
					m++;
				}
			
		}
		
		return m;
	}