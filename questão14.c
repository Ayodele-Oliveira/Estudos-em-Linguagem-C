/*14) Faça um programa que entre o salário de um funcionário, calcule e imprima o novo
salário sabendo-se que este sofreu um aumento de 25%.*/

#include <stdio.h>
	
	int main(){
	
	float salario;

	printf("Informe seu salário atual, por favor: \n");
	scanf("%f", &salario);
	
	printf("Seu salário após o aumento é: %.2f\n", salario + (salario * 0.25));
}