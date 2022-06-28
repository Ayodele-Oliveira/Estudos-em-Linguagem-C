/*16) Escreva um programa para ler uma frase e contar o número de palavras existentes na frase.
Considere palavra um conjunto qualquer de caracteres separados por um conjunto qualquer de
espaços em branco.*/

#include <stdio.h>
#include <string.h>

	int main(){
		char s[1000];
		int i, j= 0, tam;
		
		printf("Por favor, informe uma frase: \n\n");
		gets(s);
		
		tam = strlen(s);
		
		for(i = 0; i < tam; i++){
			if(s[i] == ' ' && s[i+1] != ' '){
				j++;
			}
		}
		printf("O número de palavras é: %d\n", j+1);
	}