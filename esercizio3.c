#include <stdio.h>
int main()
{ 
    int anno;
    printf("inserisci un anno: \n");
    scanf("%d", &anno);
    if(anno%400 == 0)
{
    printf("%d parrebbe bisestile\n", anno);
}
else{
    printf("%d non è bisestile\n", anno);
}
return 0;










}