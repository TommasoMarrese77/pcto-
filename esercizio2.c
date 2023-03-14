#include <stdio.h>
int main()
{
   char sesso;
   printf("inserisci il tuo sesso:\n(M) maschio\n(F) femmina\n(N) non identificato\n");
   scanf("%c", &sesso);
   if(sesso =='m'|| sesso== 'M')
   {
    printf( "Sei un maschio\n");
   }
   else if( sesso== 'f'|| sesso== 'F')
   {
    printf("Sei una femmina\n");
   }
   else if( sesso== 'n'|| sesso == 'N')
   {
    printf("Non sei identificato\n");
   }
   else {
    printf( "Inserisci un valore tra M, F e N!\n");
    return -1;
   }
   return 0;
}