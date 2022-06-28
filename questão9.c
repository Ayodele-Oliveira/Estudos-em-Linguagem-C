/*9) Faça um programa que leia três números reais e imprima a média aritmética com a
mensagem: MEDIA: antes do resultado.*/

#include <stdio.h>
	int main(){
	
		float num1, num2, num3;
		
		printf("Insira três números, por favor: \n");
	
		scanf("%f,%f,%f", &num1,&num2,&num3);
	
		printf("MEDIA: %.2f\n", (num1 + num2 + num3)/3);


}