#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Elaborar um programa em C que receba o Nome e ano nascimento de uma pessoa.

Fazer as verifica��es em cada entrada e ser n�o atender a condi��o, dar uma mensagem e finalizar o programa em C, caso contr�rio, processar e mostrar o nome e sua idade.

Obs.: Considerar que a pessoa j� fez anivers�rio este ano.*/

char nome[100];
int nasc=0, idade=0;

    printf("Qual seu nome?\n");
    fflush(stdin);
    gets(nome);

    printf("Em que ano nasceu?\n");
    scanf ("%i", & nasc);

if (nasc<1922 || nasc>2022) {
    return 0;

}else {
    idade = 2022 - nasc;
    printf("Nome: %s \nIdade: %i",nome,idade);

}

return 0;
}
