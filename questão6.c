/*6) Faça um programa que leia a idade, peso, altura e o sexo de uma pessoa e imprimir cada
dado numa linha.*/

#include <stdio.h>
	
	int main(){
		
		int idade;
		char sexo;
		float altura, peso;
	
		printf("Por favor, informe idade, peso, altura e sexo.\n");
		
		scanf("%d,%f,%f", &idade, &peso, &altura);
		fgetc(stdin);
		scanf("%c", &sexo);
		printf("As informações dadas são:\nAltura: %.2f\nIdade: %d\nPeso: %.2f\nSexo: %c\n", altura, idade, peso, sexo);


}