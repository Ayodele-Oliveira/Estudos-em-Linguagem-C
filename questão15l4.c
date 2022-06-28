/*15) Faça um programa que entre com um ângulo em radianos e, através de uma função, converta
para graus.*/

#include <stdio.h>
#define PI 3.1415

	float graus(float rad);
	
	int main(){
	
		float rad, grau;
		
		printf("Por favor, informe um ângulos em radianos: \n\n");
		scanf("%f", &rad);
		
		grau = graus(rad);
		
		printf("Em graus temos %.2f.\n\n", grau);
	}
	
	float graus(float rad){
		float g;
		
		g = rad * (180 / PI);
		
		return g;
	}