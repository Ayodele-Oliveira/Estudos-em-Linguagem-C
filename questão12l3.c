/*12) Faça um programa que leia e imprima dois vetores de inteiros de mesmo tamanho (use a
diretiva #define para definir o tamanho dos vetores). Em seguida, mostre o menu abaixo:

MENU
1 – VETOR SOMA
2 – VETOR DIFERENÇA
3 – VETOR PRODUTO
4 - VETOR MÉDIA
5 – SAIR
OPÇÃO:

- Se for escolhido 1, então gere e imprima o vetor soma entre os dois vetores;
- Se for escolhido 2, então gere e imprima o vetor diferença entre os dois vetores;
- Se for escolhido 3, então gere e imprima o vetor produto entre os dois vetores;
- Se for escolhido 4, gerar o vetor média entre os elementos em cada posição dos dois vetores.
- o menu deve ficar sendo mostrado até que o usuário escolha a opção 5.*/

#include <stdio.h>
#define M 5
	int main(){
		
		int i, v[M], u[M], soma[M], media[M], prod[M], dif[M], op;
		
		for(i = 0; i < M; i++){
			printf("Elemento[%d]:\n\n", i);
			scanf("%d", &v[i]);
		}
		for(i = 0; i < M; i++){
			printf("Elemento[%d]:\n\n", i);
			scanf("%d", &u[i]);
		}
		//printando os vetores
		for(i = 0; i < M; i++){
			printf("[%d]: %d\n\n", i, v[i]);
			
		}
		for(i = 0; i < M; i++){
			printf("[%d]: %d\n\n", i, u[i]);
			
		}
		do{
			printf("Escolha umas das opções abaixo:\n1 – VETOR SOMA\n2 – VETOR DIFERENÇA\n3 – VETOR PRODUTO\n4 - VETOR MÉDIA\n5 – SAIR\\n\n");
			scanf("%d", &op);
			
			switch(op){
				case 1:
					for(i = 0; i < M; i++){
						soma[i] = v[i] + u[i];
					}
					for(i = 0; i < M; i++){
						printf("O vetor soma:[%d] é %d\n\n", i, soma[i]);
					}
					
					break;
				case 2:
					for(i = 0; i < M; i++){
						dif[i] = v[i] - u[i];
					}
					for(i = 0; i < M; i++){
						printf("O vetor diferença:[%d] é %d\n\n", i, dif[i]);
					}
					
					break;
				case 3:
					for(i = 0; i < M; i++){
						prod[i] = v[i] * u[i];
					}
					for(i = 0; i < M; i++){
						printf("O vetor produtor:[%d] é %d\n\n", i, prod[i]);
					}
					
					break;
				case 4:
					for(i = 0; i < M; i++){
						media[i] = (v[i] + u[i])/2;
					}
					for(i = 0; i < M; i++){
						printf("O vetor média:[%d] é %d\n\n", i, media[i]);
					}
					
					break;
				case 5:
					printf("\nSAIR!\n");
					break;
				default:
					printf("Opção Inválida!\n");
			}
		
		}
		while(op != 5);
	}