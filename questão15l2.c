/*15) Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N. Faça um programa que calcule o
valor de H com N termos.*/

#include <stdio.h> 

	int main(){
	
		int  n, i;
		float serie = 0;
		
		printf("Por favor, informe um número: \n");
		scanf("%d", &n);
		
	
		
		if (n > 0){
			
			for ( i = 1; i <= n; i++){
			serie = serie + (1.0 / i);
		
			}
		}
		
		printf("A soma da série é: %.2f\n\n", serie);
	
	}