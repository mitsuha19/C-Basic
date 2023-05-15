#include<stdio.h>

int main(){

    int a1, a2, a3, b1, b2, b3 ;
    int anni = 0 ;
    int Budi = 0;

    printf("masukkan 3 point anni dan 3 point Budi : ");
    scanf("%d %d %d %d %d %d",&a1 ,&a2 ,&a3 ,&b1 ,&b2 ,&b3);

    if (a1>b1)
    {
        anni++; 
    }else if (a1<b1)
    {
        Budi++;
    }
    
    if (a2>b2)
    {
        anni++;
    }else if (a2<b2)
    {
        Budi++;
    }

    if (a3>b3)
    {
        anni++;
    }else if (a3<b3)
    {
        Budi++;
    }
    
    printf("%d %d", anni, Budi);
    
    
    return 0;
}