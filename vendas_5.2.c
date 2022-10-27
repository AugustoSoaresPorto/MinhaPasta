#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Dado um valor de vendas, computar e apresentar:
    a) o lucro l�quido;
    b) a comiss�o; e o
    c) lucro bruto.

    Considerando que:
    a) o valor de vendas ser� fornecido pelo operador (usu�rio) e n�o pode ser inferior a R$ 2.000,00
    b) o valor da comiss�o corresponde a 10% do valor de vendas acrescido de R$ 100,00;
    c) o valor do lucro bruto corresponde a 80% da diferen�a entre o valor das vendas e o valor da comiss�o;
    d) o valor do lucro l�quido corresponde a 95% do lucro bruto reduzindo-se deste resultado R$ 75,00

obs.: VERIFICAR cada entrada de dados e finalizar o algoritmo caso tenha algum valor inv�lido, n�o processando as pr�ximas entradas e demais c�lculos. */

float lliquido=0.0, comissao=0.0, lbruto=0.0, vendas=0.0;

    printf("Informe o valor de vendas: ");
    scanf("%f",&vendas);

    if (vendas<2000) {
        printf("Valor invalido");

    } else {
        comissao= 0.1*vendas + 100;
        lbruto= 0.8*(vendas - comissao);
        lliquido= 0.95*lbruto - 75;

        printf("Lucro liquido: R$%.2f \nComissao: R$%.2f \nLucro bruto: R$%.2f",lliquido,comissao,lbruto);
    }


    return 0;
}
