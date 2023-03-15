#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[] = {"lucas"};

    size_t size = sizeof(nome) / sizeof(nome[0]);

    //printf("%d", size);

    for(int i = size-1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
}
