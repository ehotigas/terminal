#include <stdio.h>
#include <stdlib.h>





int main() {
    int *i, j;
    int valor = 10;
    void *pValor = &valor;

    int *teste = pValor;

    printf("%d", *teste);
    return 0;
}