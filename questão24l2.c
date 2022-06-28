/*24) Faça um programa que mostre as seguintes opções:

MENU
1 - SÉRIE
2 - FATORIAL
3 - SOMATÓRIO
4 - SAIR
OPÇÃO:
- Se for escolhido 1, então leia um número inteiro positivo e calcula e
imprima o valor da série:
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
- Se for escolhido 2, leia um número inteiro n e imprima o fatorial do
numero lido;
- Se for escolhido 3, então leia um valor inteiro positivo e imprima o valor
do somatório de 1 até o número lido;
- Se for escolhido 4, imprime a mensagem “Sair do programa”;
- Qualquer outro número imprime a mensagem: “Opção Inválida”.
- O programa só terminará quando o usuário escolher a opção 4.
Dica: (USAR COMANDOS DO...WHILE e o SWITCH...CASE).*/


#include <stdio.h>

	int main(){
	
		int op, n, i, fatorial = 1, somatorio = 0;
		float serie = 0;
		
		
		do{
		
			printf("Menu\n1-Série\n2-Fatorial\n3-Somatório\n4-Sair\n\n");
			scanf("%d", &op);
			
			switch (op){
			
			
				case 1:
			
					printf("Informe um número, por favor: \n\n");
					scanf("%d", &n);
				
					if (n > 0){
				
						for(i = 1; i <= n; i++){
					
							serie = serie + (float)1/i;
						}
						
						printf("A soma da série é: %.2f\n\n", serie);
						
						serie = 0;
				
					}
				
					break;
					
				case 2:
				
					printf("Informe um número, por favor: \n\n");
					scanf("%d", &n);
					
					if (n > 0){
					 
					 	for (i = 1; i <= n; i++){
							
							fatorial = fatorial * i;
							
						}
						
						printf("Fatorial = %d\n\n", fatorial);
						
						fatorial = 1;
					 
					 }
					 
					else if ( n == 0){
					 
					 	printf("O fatorial é 1.\n");
					 
					 }
					 
					break;
					 
				case 3: 
				
					printf("Informe um número, por favor: \n\n");
					scanf("%d", &n);
					
					if(n > 0){
					
						for(i = 1; i <= n; i++){
						
							somatorio = somatorio + i;
						
						}
						
						printf("O somatório é %d\n\n", somatorio);
					
					
					}
					
					break;
					
				case 4:
				
					printf("Sair do programa!\n\n");
					
					break;
					
				default:
				
					printf("Opção Inválida!\n\n");
					
					break;
				
			}
		
		}
		
		while( op != 4);
	
	}