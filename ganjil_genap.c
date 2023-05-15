#include<stdio.h>

int main(){
    int a;
    int b = 2;

    scanf("%d", &a);

    if (a % b != 0)
    {
       printf("Bilangan Ganjil");
    } else {
        printf("Bilangan Genap");
    }

    
    return 0;
}