/*13) Escreva um programa que leia e imprima uma string de tamanho máximo 100. Em seguida,
imprima todas as vogais encontradas no texto e o total de vezes que elas aparecem.*/

#include <stdio.h>
#include <string.h>

	int main(){
		char v[100];
		int i, a = 0, e = 0, g= 0, o = 0, u = 0, tam;
		
		printf("Por favor, insira uma pequena frase:\n\n");
		gets(v);
		tam= strlen(v);
		
		
		for(i = 0; i < tam; i++){
			if (v[i] == 'a' || v[i] == 'A'){
				a++;
				printf("%c\n\n", v[i]);
			}
			
			if (v[i] == 'e' || v[i] == 'E'){
				e++;
				printf("%c\n\n", v[i]);
			}
			if (v[i] == 'i' || v[i] == 'I'){
				g++;
				printf("%c\n\n", v[i]);
			}
			if (v[i] == 'o' || v[i] == 'O'){
				o++;
				printf("%c\n\n", v[i]);
			}
			if (v[i] == 'u' || v[i] == 'U'){
				u++;
				printf("%c\n\n", v[i]);
			}
			
			}
			printf("O número de vezes que A aparece é %d\n\n", a);
			printf("O número de vezes que E aparece é %d\n\n", e);
			printf("O número de vezes que I aparece é %d\n\n", g);
			printf("O número de vezes que O aparece é %d\n\n", o);
			printf("O número de vezes que U aparece é %d\n\n", u);


		
		
	}