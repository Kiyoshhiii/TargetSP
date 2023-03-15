#include <stdio.h>
#include <stdlib.h>

int main() {
    double sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53, soma = 0;

    soma = sp + rj + mg + es + outros;

    printf("Total: %.2lf", soma);
    printf("\nSP: %.2lf%%", (67836.43*100)/soma);
    printf("\nRJ: %.2lf%%", (36678.66*100)/soma);
    printf("\nMG: %.2lf%%", (29229.88*100)/soma);
    printf("\nES: %.2lf%%", (27165.48*100)/soma);
    printf("\nOutros: %.2lf%%", (19849.53*100)/soma);
}
