/*21) Escreva um programa para entrar com sexo de várias pessoas e imprimir
quantas pessoas são do sexo masculino (considerar m ou M) e quantas
pessoas são do sexo feminino (considerar f ou F). (USAR COMANDO
WHILE).*/

#include <stdio.h>

	int main(){
	
		char sexo;
		int contf = 0, contm = 0;
		
		printf("Por favor, informe o sexo da pessoa: ");
		fgetc(stdin);
		scanf("%c", &sexo);
		
		
		while( sexo == 'm' || sexo == 'M' || sexo == 'f' || sexo == 'F' ){
		
			if (sexo == 'F' || sexo == 'f'){
			
				contf++;
			
			}
			
			else {
			
				contm++;
			}
			
			printf("Por favor, informe o sexo da pessoa: \n\n");
		
			scanf("%c", &sexo);
		
		}
		
		printf("A quantidade de pessoas do sexo feminino é: %d\n\n", contf);
		
		printf("A quantidade de pessoas do sexo masculino é %d\n\n", contm);
		
	
	}