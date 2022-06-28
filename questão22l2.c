/*22) Escreva um programa que leia 10 números reais positivos e imprima raiz
quadrada de cada número. Para cada entrada de dados deverá ter um trecho de
proteção para que um número negativo não seja aceito. (USAR COMANDO
WHILE).*/

#include <stdio.h>
#include <math.h>

	int main(){
	
		int cont = 0;
		float n;
	
	
		while (cont != 10){
		
			printf("Informe, um número, por favor: \n\n");
			scanf("%f", &n);
		
			if ( n > 0){
			
				printf("A raíz do número é: %.2f\n", sqrt(n));
				
				cont++;
			
			}
		
		
		}
	}