#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Escreva um programa na linguagem C para calcular o consumo m�dio de um autom�vel (medido em km), dado que s�o conhecidos a dist�ncia percorrida e o volume de combust�vel consumido para percorr�-la
    (medido em litros).
    */

//Variaveis
    float distancia, volume, taxa_consumo;
    distancia = 0.0;
    volume = 0.0;
    taxa_consumo = 0.0;

//Entrada
    printf("Informe qual a distancia percorrida em kilometros: ");
    scanf("%f", & distancia);

    printf("Informe o volume de combustivel gasto em litros: ");
    scanf("%f", & volume);

//Processamento
    taxa_consumo = distancia / volume;

//Sa�da
    printf("O consumo m�dio foi de %.2f Km/L", taxa_consumo);

    return 0;
}
