/*2) Faça um programa que leia notas de três provas e logo após chame uma função que recebe as
notas e calcule e retorna a média entre as notas. Imprimir o valor da média na main().*/

#include <stdio.h>

	float calculaMedia(float n1, float n2, float n3){
		float media = (n1 + n2 + n3)/3;
		return media;
	}
	int main(){
		float n1, n2, n3, media;
		
		printf("Por favor, informe as notas das 3 provas: \n\n");
		scanf("%f, %f, %f", &n1, &n2, &n3);
		
		media = calculaMedia(n1, n2, n3);
		
		printf("A média das notas é: %.2f\n\n", media);
		}