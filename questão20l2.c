/*20) Escreva um programa para ler vários números e informar quantos números
entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o programa
deverá parar sua execução. (USAR COMANDO WHILE).*/

#include <stdio.h>

	int main(){
	
		int n, cont = 0; 
		
		printf("Informe um número, por favor: \n\n");
		scanf("%d", &n);
		
		while (n != 0){
		
			if(n >= 100 && n <= 200){
			
				cont++;
			}
			
			printf("Por favor, informe um número: \n\n");
			scanf("%d", &n);
		
		}
		
		printf("Os números entre 100 e 200 são: %d", cont);
	}