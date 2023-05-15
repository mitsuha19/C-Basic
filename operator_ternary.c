#include<stdio.h>

int main(){
    int x;
    int y;

    printf("masukkan nilai pertama: ");
    scanf("%d",&x);
    printf("masukkan nilai kedua: ");
    scanf("%d",&y);

    x > y ? printf("%d lebih besar dari %d" ,x ,y) : printf("%d lebih besar dari %d" ,y ,x);

    return 0 ;

}

