/*22) Faça um programa que entre com um número inteiro e informe se ele é positivo,
negativo ou nulo.*/

#include <stdio.h>
	int main(){
	
	int num;
	
	printf("Informe um número inteiro, por favor: \n");
	scanf("%d", &num);
	
	if (num > 0){
		printf("O número é posiivo!\n");
	}
	else if ( num == 0){
		printf("O número é nulo!\n");
	}
	else{
		printf("O número é negativo!\n");
	}

}