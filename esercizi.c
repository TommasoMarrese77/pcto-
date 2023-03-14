#include <stdio.h>
 int main()
 {
    int eta;
    printf("Quanti anni hai: ");
    scanf("%d", &eta);
    printf("Hai anni %d\n", eta);

    if (eta < 18)
    {
        printf("Sei minorenne!\n");
    }
    else
    {
        printf("Sei maggiorenne!\n");
    }
 }