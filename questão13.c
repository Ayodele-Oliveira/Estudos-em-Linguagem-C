/*13) Faça um programa que entre o salário de um funcionário, calcule e imprima o valor do
imposto de renda a ser pago, sabendo que o valor do imposto de renda equivale a 5% do
salário.*/

#include <stdio.h>
	
	int main(){
		
		float salario;
	
		printf("Por favor, informe seu salário: \n");
		scanf("%f", &salario);
	
		printf(" O valor do seu imposto de renda é: %.2f\n", salario * 0.05);

}