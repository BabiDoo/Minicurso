#include <stdio.h>

int main()
{
    int notaFinal;
    char nome[20];
    int frequencia;
    
    printf("Digite o nome do aluno: \n");
    scanf("%d", &nome);
    printf("Digite a nota final do aluno: \n");
    scanf("%d", &notaFinal);
    printf("Digite a frequencia do aluno: \n");
    scanf("%d", &frequencia);
    
    
    
    if(notaFinal >= 60 && frequencia >=70) {
        printf("ALUNO APROVADO");
    } else if ( notaFinal < 60 && frequencia >=70) {
        printf("RECUPERAÇÃO!!");
    } else {
        printf("REPROVADO");
    }

    return 0;
}
