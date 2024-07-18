#include <stdio.h>
#include <string.h>

int main()
{
    int notaFinal; //declara um inteiro chamado notaFinal
    char nome[60]; //declara uma string chamada nome com 60 caracteres
    int frequencia;
    char confirmacao[4];

    printf("Digite o nome do aluno: \n");
    scanf("%s", nome); //pede ao usuário o nome do aluno (note que nao se usa & antes de 'nome',
                       //não se usa APENAS para arrays);

    printf("Digite a nota final do aluno: \n");
    scanf("%d", &notaFinal); //pede ao usuário a nota final do aluno. Aqui já se usa &.

    printf("Digite a frequencia do aluno: \n");
    scanf("%d", &frequencia);
    
    printf("Aluno fez a atividade com ponto extra? \n");
    scanf("%s", confirmacao);

    if((strcmp(confirmacao, "sim") == 0) || strcmp(confirmacao, "SIM") == 0 ) {

        notaFinal++;

    }
    

    if(notaFinal >= 60 && frequencia >=70) { //Condição 1
        printf("Aluno(a) %s aprovado com %d de nota!! PARABENS", nome, notaFinal);
    } else if ( notaFinal < 60 && frequencia >= 70) { //Condição 2
        printf("Aluno(a) %s de recuperacao com nota %d. BOA SORTE!!", nome, notaFinal);
    } else { //Fora de qualquer condição
        printf("Aluno(a) %s reprovado por falta.", nome);
    }

    return 0;
}
