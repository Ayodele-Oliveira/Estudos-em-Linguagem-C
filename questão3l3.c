/*3) Escreva um programa que leia um vetor com 20 elementos reais. Imprima o vetor e mostre a
média entre os positivos e a quantidade de negativos lidos.*/


#include <stdio.h>

	int main(){
	
		int i, negat = 0, cont = 0;
		float v[20], posit = 0;
		
		for(i = 0; i < 20; i++){
			printf("Informe um número, por favor: \n\n");
			scanf("%f", &v[i]);
			
			if(v[i] > 0){
			
				posit = posit + v[i];
				cont++;
			}
			
			else{
			
				negat++;
			}
		}
		
		for(i = 0; i < 20; i++){
			printf("v[%d]= %d\n", i, v[i]);
			
		}
		
		printf("A média dos positivos é: %.2f\n\n", posit / cont);
		printf("A quantidade de negativos é: %d\n\n", negat);
	
	}