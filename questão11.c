/*11) Faça um programa que entre com o número de milhas e imprima o número de milha
lido convertido para metros (Uma milha é igual a 1609 metros).*/

#include <stdio.h>
	int main(){
	
	float milhas;

	printf("Informe a quantidade de milhas, por favor: \n");
	scanf("%f", &milhas);
	
	printf("Em metros é: %.2f\n", milhas * 1609);
}