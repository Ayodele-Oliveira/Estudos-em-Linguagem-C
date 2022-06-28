/*14) Faça um programa que entre com um ângulo em graus e, através de uma função, converta
para radianos.*/

#include <stdio.h>
#define PI 3.1415

	float radianos( float ang);
	
	int main(){
	
		float ang, rad;
		
		printf("Por favor, informe um ângulo em graus: \n\n");
		scanf("%f", &ang);
		
		
		rad = radianos(ang);
		
		printf("Em radianos temos: %.2f.\n\n", rad);
	
	}
	
	float radianos(float ang){
		float rad;
		
		
		rad = ang * ( PI / 180);
			
		return rad;
	
	}