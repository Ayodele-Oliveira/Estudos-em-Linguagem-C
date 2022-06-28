/*11) Faça um programa que leia dois vetores que contenham as notas p1 e p2, respectivamente,
de uma turma de 20 alunos. Gere um vetor MEDIA entre os dois vetores lidos. Em seguida,
Calcule a média da turma e conte quantos alunos obtiveram média acima da média da turma
calculada. Imprimir os vetores, a média da turma e o resultado da contagem.*/

#include <stdio.h>
	int main(){
	
		float p1[20], p2[20], media_aluno[20],media_turma, soma_media = 0;
		int i, cont = 0;
		
		for(i = 0; i < 20; i++){
			printf("Informe a nota da sua primeira prova, por favor: \n");
			scanf("%f", &p1[i]);
		-
		}
		
		for(i = 0; i < 20; i++){
			printf("Informe a nota da sua segunda prova, por favor: \n");
			scanf("%f", &p2[i]);
		
		}
		
		for(i = 0; i < 20; i++){
			media_aluno[i] = (p1[i] + p2[i])/ 2;
		
		}
		for(i = 0; i < 20; i++){
			soma_media = soma_media + media_aluno[i];
		}
		// foi canculado aqui devido não precisar de um comando for para realizar o calculo;
		media_turma = soma_media / 20;
		
		for(i = 0; i < 20; i++){
			if(media_aluno[i] > media_turma){
				cont++;
			
			}
		
		}
		printf("O número de alunos com média acima da turma é: %d\n\n", cont);
		printf("A média da turma é: %.2f\n", media_turma);
	}