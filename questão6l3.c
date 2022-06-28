/*6) Fazer um programa para ler um vetor de inteiros positivos de 50 posições. Imprimir a
quantidade de números pares e de múltiplos de 5.*/

#include <stdio.h>
	int main(){
	
		int v[50], par = 0, mult = 0, i;
		
		for(i = 0; i < 50; i++){
			printf("Informe um número, por favor: \n");
			scanf("%d", &v[i]);
			
			if(v[i] > 0){
				if(v[i] % 2 == 0){
					par++;
				}
				else if(v[i] % 5 == 0){
					mult++;
				}
			}
			
			else{
				printf("O número informado não é positivo, por favor informe um novo número: \n");
				scanf("%d", &v[i]);
			}
		}
		
		printf("A quantidade de pares é: %d\n", par);
		printf("A quantidade de múltiplos de 5 é: %d\n\n", mult);
	}