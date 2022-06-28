/*19) Tendo os dados de entrada a altura e o sexo de uma pessoa. Construa um programa que
calcule seu peso ideal, utilizando as seguintes regras:
                           i. Para homens: (72.7 * h) – 58
                           ii. Para mulheres: (62.1 * h) – 44.7 Onde: h é a altura*/
									
#include <stdio.h>
	int main(){
	float altura;
	char sexo;
	
	printf("Informe sua altura e seu sexo, se feminino: F ou f e se masculino: M ou m.\n");
	scanf("%f", &altura);
	
	fgetc(stdin);
	
	scanf("%c", &sexo);
	
	if (sexo == 'F' || sexo == 'f'){
		printf("Seu peso ideal é: %.2f.\n\n", (62.1 * altura) - 44.7);
	}
	
	else{
		printf("Seu peso ideal é: %.2f.\n\n", (72.7 * altura) - 58);
	}
}
									