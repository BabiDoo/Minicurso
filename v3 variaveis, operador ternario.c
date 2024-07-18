
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// código simulando um aceite de contrato, usando operador ternário e booleanos 

int main(void){



    char confirmacao[4];

    bool resultado;

    printf("ACEITA RENOVAR A MATRICULA? 'SIM' OU 'NAO' em letras maiusculas \n");
    scanf("%s", confirmacao);

    resultado = strcmp(confirmacao, "SIM") == 0 ? true : false; //usando operador ternario e booleanos de fato 

    if(resultado) {
        printf("NOVO CONTRATO ATUALIZADO!! \n");
    } else {
        printf("PROCURE A SECRETARIA \n");
    };



    return 0;
}






