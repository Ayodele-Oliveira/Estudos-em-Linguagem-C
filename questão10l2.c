// 10) Escreva um programa que leia a matrícula, a nota da V1 e a nota da V2 de 20 alunos. Imprima a média de cada aluno lido. Ao final, imprima a média geral da turma.

#include <stdio.h>
	
	int main(){
		
		int matricula, i;
		float v1, v2, media_aluno, soma_media_aluno = 0;
	
		for (i = 0; i < 4; i++){
			printf("Informe a matrícula do aluno: \n");
			scanf("%d", &matricula);
			
			printf("Informe as notas das duas avaliações: \n");
			scanf("%f, %f", &v1, &v2);
			
			media_aluno = (v1 + v2) / 2;
			
			printf("A média do aluno %d é %.2f\n\n", matricula, media_aluno);
			
			soma_media_aluno = soma_media_aluno + media_aluno;
		
		
		}
		
		printf("A média da turma é %.2f\n\n", soma_media_aluno / 4);

	}