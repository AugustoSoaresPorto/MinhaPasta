#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Elaborar um programa em C que receba um n�mero inteiro via teclado.
 Verificar se ele � maior que zero e mostrar o c�lculo e o resultado do cubo desse n�mero, caso contr�rio d� uma mensagem de n�mero invalido.*/

int num=0, op=0;

    printf("Escolha um numero inteiro positivo: ");
    scanf("%i", & num);

    if (num>0){
        op= pow(num,3);
        printf("O cubo de %i e igual a %i",num,op);

    } else {
        printf("O numero selecionado e invalido");
        }

    return 0;
}
