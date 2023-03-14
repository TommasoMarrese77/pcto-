#include <stdio.h>

int main ()
{
      char sesso;
      int eta;
      printf("Inserisci il tuo sesso: ");
      scanf("%c", &sesso);
       
      printf("inserisci la tua eta: ");
      scanf("%d", &eta);
     printf("Hai %d anni e sei %c\n", sesso, eta);
      return 0;
}