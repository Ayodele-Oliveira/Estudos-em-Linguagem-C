/*16) Faça um programa que leia N e calcule o valor da seguinte serie: S = 1/N +
2/(N−1) + 3/(N−2) + ... + (N−1)/2 + N/ 1.*/

#include <stdio.h>

	int main(){
	
		int n, i, j;
		float serie = 0;
		
		printf("Por gentileza, informe um número: \n\n");
		scanf("%d", &n);
		
		if (n >0){
		
			j = n;
		
			for (i = 1; i <= n; i++){
				
				serie = serie + (float)i/j;
				
				j--;
			
			}
			
			printf("O valor da soma é: %.2f\n\n", serie);
		}
	
	}