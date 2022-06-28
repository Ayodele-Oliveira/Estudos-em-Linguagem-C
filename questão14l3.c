/*14) Faça um programa que inverta uma string. O programa deve ler e imprimir a string e, em
seguida, armazená-la invertida em outra string. Imprima a string invertida.*/

#include <stdio.h>
#include <string.h>

	int main(){
		int i, j = 0, tam;
		char v[100],s[100] ;
		
		printf("Por favor, informe uma frase: \n\n");
		gets(v);
		
		tam = strlen(v);
		
		for (i = (tam-1); i >= 0; i--){
			s[j] = v[i];
			
			j++;
		}	
		
		printf("%s\n", s);
	}