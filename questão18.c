/*18) Escreva um programa para ler um número inteiro n e imprimi-lo caso seja maior que
100. Caso contrário, multiplique o número por 3 e imprima o valor.*/

#include <stdio.h>
	int main(){
		int num;
	
		printf("Informe um número, por favor: \n");
		scanf("%d", &num);
	
		if (num > 100){
			printf("O número %d é maior que 100.\n", num);
		
		}
		else {
			printf("O produto do número por 3 é: %d\n", num * 3);
		}


}

