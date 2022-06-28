/*15) Faça um programa para entrar com dois números inteiros e imprimir a seguinte saída:
Quociente:... Resto: ...*/

#include <stdio.h>
	int main(){

		int num1, num2;
			
		printf("Informe dois números, por favor: \n");
		scanf("%d,%d", &num1, &num2);
	
		printf("O quociente é: %d\nO resto é: %d\n", num1 / num2, num1 % num2);


}