#include<stdio.h>

int main(){

    int hari;
    
    scanf("%d", &hari);

    if (hari == 1)
    {
       printf("senin");
    } else if (hari == 2)
    {
        printf("selasa");
    } else if (hari == 3)
    {
        printf("Rabu");
    } else if (hari == 4)
    {
        printf("Kamis");
    } else if (hari == 5)
    {
        printf("Jumat");
    } else if (hari == 6)
    {
        printf("Sabtu");
    } else if (hari == 7)
    {
        printf("Minggu");
    } else
    {
        printf("Tidak Valid");
    }
    
    
    
    return 0;
}