#include<stdio.h>

int main(){
    int a = 2, b = 3;
    float c;

    c = a + b;
    printf("%d + %d = %.2f\n", a, b, c);
    c = a - b;
    printf("%d - %d = %.2f\n", a, b, c);
    c = a * b;
    printf("%d * %d = %.2f\n", a, b, c);
    c =  (float) a / b;
    printf("%d / %d = %.2f\n", a, b, c);
    c = a % b ;
    printf("%d mod %d = %.2f\n", a, b, c);


    return 0;
}