#include<stdio.h>

int main(){
    int a = 2, b = 3 ;
    float c = (float) a ;

    c += b ;
    printf("%d + %d = %.2f\n", a ,b ,c );

    c = a ;
    c -= b;
    printf("%d - %d = %.2f\n", a ,b ,c );

    c = a ;
    c *= b;
    printf("%d * %d = %.2f\n", a ,b ,c );

    c = a ;
    c /= b;
    printf("%d / %d = %.2f\n", a ,b ,c );

    c = a ;
    a %= b;
    printf("%d mod %d = %d\n", (int) c ,b ,a );

    return 0;
}