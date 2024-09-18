/**
 * Programa para determinar a nota final através do cálculo da média 
 * entre a nota teorica e a nota prática 
 */
#include <stdio.h>

// comentário linha
/*
    comentário de bloco
*/
int main ()
{
    // 1. Ler Nota Teórica
    // <tipo da variável> <nome variável>
    int nota_teorica;
    printf("Indique a nota teórica ");
    scanf("%d", &nota_teorica);

    // 2. Ler Nota Prática
    int nota_pratica;
    printf("Indique a nota prática ");
    scanf("%d", &nota_pratica);

    //3. Calcular a média
    float media;
    //media = (nota_pratica + nota_teorica)/2;        // divisão inteira pq ambos operando inteiros
    //media = (nota_pratica + nota_teorica) / 2.0;    // divisão real pq 2º operado real: 2.0
    media = (float)(nota_pratica + nota_teorica)/2;   // divisão real pq 1º operado real: (float)(nota_pratica + nota_teorica)

    // 4. Apresentar Média
    printf("Nota teórica lida = %06d\n", nota_teorica);
    printf("Nota prática lida = %6d\n", nota_pratica);
    printf("Média = %10.2f\n", media);

    return 0;
}