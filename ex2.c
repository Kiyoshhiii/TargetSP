#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fibo(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    bool verif = true;
    int i = 0, num;

    printf("Insira um numero para encontrar: ");
    scanf("%d", &num);

    while(verif == true) {
        int numAchar = fibo(i);
        printf("%d ", numAchar);
        i++;
        if(numAchar == num) {
            printf("\nO numero existe na sequencia.");
            break;
        } else if(numAchar > num) {
            printf("\nO numero nao existe na sequencia.");
            break;
        }
    }
}
