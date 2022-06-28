/*4) Faça um programa que leia dois números inteiros e imprima a soma, a diferença , o
produto, a divisão inteira, a divisão real e o resto da divisão entre eles.*/

#include <stdio.h>
	
	int main(){
		int num1, num2;
			
		printf("Insira dois números: \n");
		scanf("%d,%d", &num1, &num2);
	
		printf("A soma dos números é: %d\n", num1 + num2);
		printf("A subtração dos números é: %d\n", num1 - num2);
		printf("O produto dos números: %d\n", num1 * num2);
		printf("A divisão inteira é: %d\n", num1 / num2);
		printf("A divisão é real: %.2f\n", (float) num1 / num2);
		printf("O resto da divisão é: %d\n", num1 % num2);

}