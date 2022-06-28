/*20) Escreva um programa que entre com um número real e imprima a raiz quadrada do
número caso ele seja positivo e o quadrado do número caso ele seja negativo.*/

#include <stdio.h>
#include <math.h>

	int main(){
	
	float num;
	
	printf("Informe um número, por favor: \n");
	scanf("%f", &num);
	
	if ( num >= 0){
		printf("A raiz quadrada do número é: %.2f\n\n",sqrt(num) );
	}
	else{
		printf("O quadrado do número é: %.2f\n\n", num * num);
	}


}