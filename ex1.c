#include <stdio.h>
#include <stdlib.h>

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while(K < INDICE) {
        K++;
        SOMA = SOMA + K;
    }
    printf("%d", SOMA);
}

//Valor da vari�vel SOMA ser� de 91.
