#include <stdio.h> // biblioteca de entrada e saída
#include <string.h> // para trabalhar com strings

int main(void) 
{
    
char confirmacao[4];
int resultado; // pode receber 1 or 0 (simulando booleanos)

printf("aceita renovar a matricula? Digite 'SIM' ou 'NAO' em letras maiusculas \n");
scanf ("%s", confirmacao);

resultado = strcmp(confirmacao, "SIM") == 0 ? 1 : 0;  // resultado da confirmação do usuário, usando operador ternário

if(resultado == 1) {
    printf("NOVO CONTRATO ATUALIZADO \n");
} else {
    printf("PROCURE A SECRETARIA \n");
}
return 0;
}