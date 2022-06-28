/*17) Faça um programa que inverta uma string. O programa deve ler e imprimir a string e, em
seguida, inverter a string nela mesma. Imprima a string invertida.*/

#include <stdio.h>
#include <string.h>

	int main(){
		char s[100], v[100];
		int i, tam;
		
		printf("Por favor, informe uma string: \n\n");
		gets(s);
		
		tam = strlen(s);
		
		strcpy(v,s);
		
		printf("%s\n\n", v);
		printf("%s\n\n", s);
		
		for(i = 0; i < tam; i++){
			s[i] = v[(tam-1) - i];
		}
		
		printf("%s\n\n", s);
	}