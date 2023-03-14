#include <stdio.h>
//5 10 15

int main(){
    int a, b, c;
    printf("inserisci tre numeri di seguito: ");
    scanf( "%d%d%d", &a, &b, &c);
    if(a-b == b-c){
        printf("%d, %d, %d sono in progressione aritmetica\n", a, b, c);
    }else{
    printf("%d, %d, %d non sono in progressione aritmetica\n", a, b, c);
    }
}