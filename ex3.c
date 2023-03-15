#include <stdio.h>
#include <stdlib.h>

int main() {
    double fatura[30], menorFatura, maiorFatura, soma = 0, mediaMensal;
    int contDias = 0, contDias0 = 0;

    for(int i = 0; i < 30; i++) {
        printf("\nDia %d: ", i+1);
        scanf("%lf", &fatura[i]);

        if(fatura[i] != 0) {
            soma = soma + fatura[i];
            contDias0++;
        }
    }

    menorFatura = fatura[0];
    maiorFatura = fatura[0];
    mediaMensal = soma/contDias0;

    for(int i = 0; i < 30; i++) {
        if(fatura[i] == 0.0) {
            break;
        }
        if(fatura[i] > maiorFatura) {
            maiorFatura = fatura[i];
        }
        if(fatura[i] < menorFatura) {
            menorFatura = fatura[i];
        }
        if(fatura[i] > mediaMensal) {
            contDias++;
        }
    }
    //printf("Media mensal: %lf", mediaMensal);
    printf("\nMaior valor de faturamento ocorrido em um dia do mes: %.2lf", maiorFatura);
    printf("\nMenor valor de faturamento ocorrido em um dia do mes: %.2lf", menorFatura);
    printf("\nNumero de dias no mes em que o valor de faturamento diario foi superior a media mensal: %d", contDias);
}
