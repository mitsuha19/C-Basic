#include<stdio.h>

int main(){
    int detik;
    int jam;
    int menit;
    int x;
    
    scanf("%d",&x);

    if (x >= 3600)
    {
        jam = x / 3600 ;
        menit = (x % 3600) / 60 ;
        detik = (x % 3600) % 60 ;
    } else if (x < 3600 && x >= 60)
    {
        jam = 0 ;
        menit = x / 60 ;
        detik = x % 60 ;
    } else
    {
        jam = 0;
        menit = 0;
        detik = x;
    }
    
    printf("%02d:%02d:%02d" ,jam ,menit ,detik);

    return 0;   
}