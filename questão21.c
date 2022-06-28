/*21) Escreva um programa que leia um número inteiro e imprima uma das mensagens:
maior do que 10, é igual a 10 ou é menor do que 10.*/

#include <stdio.h>
	int main(){
	
	int num;
	
	printf("Informe um número inteiro, por favor: \n");
	scanf("%d", &num);
	
	if (num > 10){
		printf("O número é maior que 10!\n");
	}
	else if (num == 10){
		printf("O número é igual a 10!\n");
	}
	else {
		printf("O número é menor que 10!\n");
	}


}