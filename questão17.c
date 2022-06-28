/*17) Faça um programa que leia dois números e imprima uma mensagem dizendo se são
iguais ou diferentes.*/



#include <stdio.h>
	int main(){

	float num1, num2;
	
	printf("Informe dois números, por favor: \n");
	scanf("%f,%f", &num1, &num2);
	
	
	if (num1 == num2){
		printf("São números iguais!\n\n");
	}
	else{
		printf("São números diferentes!\n\n");
	}
}