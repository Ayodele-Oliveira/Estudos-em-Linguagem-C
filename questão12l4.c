/*12) Escreva um programa que leia uma string e um caractere qualquer e chame uma função que
recebe a string e o caractere lido conta o número de vezes o caractere aparece numa string.
Imprima o valor de retorno na main().*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

	int contaCaractere(char a[], char c, int tamA);
	
	int main(){
	
		char a[100], c;
		int tam, cont;
		
		printf("Por favor, informe uma frase: \n\n");
		gets(a);
		
		printf("Por favor, informe o caractere que deseja procurar a incidência: \n\n");
		scanf("%c", &c);
		
		tam = strlen(a);
		
		cont = contaCaractere(a, c, tam);
		
		printf("O número de vezes que %c aparece é %d.\n\n", c, cont);
	
	}
	
	int contaCaractere(char a[], char c, int tamA){
	
		int i, cont = 0;
		
		for(i = 0; i < tamA; i++){
		
			if(a[i] == c){
				cont++;
			}
		}
		
		return cont;
	}