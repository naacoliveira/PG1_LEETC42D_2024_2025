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

    if (nota_teorica >= 0 && nota_teorica <= 20) {
        // 2. Ler Nota Prática
        int nota_pratica;
        printf("Indique a nota prática ");
        scanf("%d", &nota_pratica);

        //3. Calcular a média
        float media;
        //media = (nota_teorica + nota_pratica) / 2;
        //media = (nota_teorica + nota_pratica) / 2.0;
        media = (float)(nota_teorica + nota_pratica) / 2;

        // 4. Apresentar Média
        printf("Nota teórica lida = %06d\n", nota_teorica);
        printf("Nota prática lida = %6d\n", nota_pratica);
        printf("Média = %10.2f\n", media);
    } else {
        printf("Valor da nota errado\n");
    }



    return 0;
}