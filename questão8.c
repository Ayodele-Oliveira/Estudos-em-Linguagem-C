/*8) Faça um programa que leia um número real e imprima a sexta parte deste número.*/

#include <stdio.h>
	
	int main(){
		
		float num;
	
		printf("Insira o número, por favor: \n");
		scanf("%f", &num);
	
		printf("A sexta parte do número é: %.2f\n", num / 6);	

}
