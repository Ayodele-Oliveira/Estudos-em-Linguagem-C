/*15) Fazer um programa para ler uma string e dois caracteres. Imprima a string lida. Em
seguida, troque todas as ocorrências do primeiro carácter pelo segundo na string. Imprima a
string modificada.*/

#include <stdio.h>
#include <string.h>

	int main(){
		char s[100], car1, car2, tam;
		int i, j = 0;
		
		printf("Por favor, informe uma frase: \n");
		gets(s);
		
		tam = strlen(s);
	
		printf("Por favor, informe um caractere: \n\n");
		scanf("%c",&car1);
		fgetc(stdin);u
		printf("Por favor, informe um caractere: \n\n");
		scanf("%c",&car2);
		
		for(i = 0; i < tam; i++){
			if(s[i] == car1){
				s[i] = car2;
			}
		
		}
		
		printf("%s\n\n", s);
	}