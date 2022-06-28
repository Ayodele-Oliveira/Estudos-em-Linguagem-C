/*12) Faça um programa que entre com os valores dos catetos de um triângulo retângulo e
imprima a hipotenusa (Lembrando: hipotenusa =((Cateto 1)^2 + (cateto 2)^2)^(1/2) ).*/

#include <stdio.h>
#include <math.h>
	
	int main(){
	
		float cateto1, cateto2;

		printf("Informe os dois catetos do triângulo retângulo, por favor: \n");
		scanf("%f,%f", &cateto1, &cateto2);
	
		printf("A hipotenusa é: %.2f\n", sqrt( pow(cateto1,2) + pow(cateto2,2)) );

}