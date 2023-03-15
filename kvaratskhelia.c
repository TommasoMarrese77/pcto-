
#include <stdio.h>


int main() {
    int i = 2;
   int primo2 = 0;
    int input;
    printf("Inserisci un numero da verificare: ");
    scanf("%d", &input);
    while (i<input) 
    {
        if (input%i == 0)
        {
            printf("%d non è primo\n", input);
            primo2 = 1;
            break;
        }
        i++; 
    }
    if (primo2 == 0) {
        printf("%d è un numero primo\n", input);
    }
    
}