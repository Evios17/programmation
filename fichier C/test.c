#include <stdio.h>

int main() {
    int n = 0;

    scanf("%d", &n);

    printf("Le nombre %d et %s", n, (n > 0)?"positif":"négatif");


    return 0;
}