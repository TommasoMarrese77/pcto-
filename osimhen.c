#include <stdio.h>

int main() {
    int i = 0;
    int somma = 0;
    while (i<=100)
    {   
        printf("[DEBUG] somma at %d, i at %d\n", somma, i);
        if (i%2 == 0) {
            somma += i;
        } else{}
        i++;
    }
    printf("Somma totale: %d\n", somma);
    return 0;
}
