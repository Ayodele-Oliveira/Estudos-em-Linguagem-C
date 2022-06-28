/*23) Faça um programa que tenha a seguinte saída:

MENU
1 - CALCULA QUADRADO
2 - CALCULA RAIZ QUADRADA
3 - CALCULA LOGARITMO
4 - SAIR
OPÇÃO:

- Se for escolhido 1, então pede-se o número e imprime o quadrado do
número;
- Se for escolhido 2, então pede-se o número real e imprime a raiz quadrada,
caso seja positivo. Caso contrário, imprima a mensagem “Número Negativo!”;
- Se for escolhido 3, então pede-se o número e a base, imprime o logaritmo do
número nesta base.
- Se for escolhido 4, imprima uma mensagem e saia do programa.
- Para qualquer outra opção, imprima “Opção Inválida.”
- O programa só terminará quando o usuário escolher a opção 4.*/


#include <stdio.h>
#include <math.h>

	int main(){
	
		int op;
		float n, base;
	
		do {
		
			printf("Menu\n1-Calcula Quadrado\n2-Calcula raíz quadrada\n3-Calcula LOgaritmo\n4-Sair\n\n");
			scanf("%d", &op);
			
			switch (op){
			
				case 1: 
				
					printf("Informe um número, por favor: \n");
					scanf("%f", &n);
					
					printf("O quadrado do número do número %.2f é %.2f\n",n, pow(n, 2));
					
					break;
					
				case 2:
				
					printf("Informe um número, por favor: \n");
					scanf("%f", &n);
					
					if( n >= 0){
					
						printf("A raíz quadrada do número é %.2f\n", sqrt(n));
					
					}			
					
					else{
					
						printf("Número Negativo!\n");
					
					}
					
					break;
					
				case 3:
				
					printf("Informe um número e uma base, por favor: \n");
					scanf("%f, %f", &n, &base);
					
					if (n > 0 && base > 0){
					
						printf("O logaritmo do número na base desejada é: %.2f\n\n", log(n)/log(base));
					
					}
					
					break;
					
				case 4:
				
					printf("Finalizar!\n");
					
					break;
					
				default:
				
					printf("Opção Inválida!\n\n");
					
					break;
			}
		
		
		}
		
		while (op != 4);
	
	}