/*5) Fazer um programa ler e imprimir um vetor de 10 elementos inteiros e positivos e imprimir
quantas vezes um determinado número lido via teclado aparece no vetor.*/

#include <stdio.h>

	int main(){
	
		int v[10], i, n, cont = 0;
		
		for (i = 0; i < 10; i++){
		
			printf("	Informe um número por favor: \n\n");
			scanf("%d", &v[i]);
			
				if (v[i] > 0){
				
					v[i] =  v[i];
				}
				
				else {
					printf("O número não é positivo, informe um novo número.\n\n");
					
					scanf("%d", &v[i]);
							
				}
		}
		
		printf("Informe o número que deseja verificar faz parte do vetor.\n\n");
		scanf("%d", &n);
	
		for(i = 0; i < 10; i++){
		
			if ( v[i] ==  n){
			
				cont++;
			}
		}
		
		printf("A quantidade de %d é %d\n", n, cont);
	}