#include<stdio.h>

int main(){

    int a;
    
    scanf("%d",&a);

    if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0)) ) 
    {
        printf("Tahun Kabisat");
    } else
    {
        printf("Bukan Tahun Kabisat");
    }
    
    return 0;
}