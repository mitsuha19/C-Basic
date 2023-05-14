#include<stdio.h>

int main(){
    int a = 2 , b = 3 ;
    int c;

    c = (a < b) && (a > 1);
    printf ("(%d < %d) && (%d > 1) = %d\n", a, b, a, c);

    c = (a < b) || (a > 1);
    printf ("(%d < %d) || (%d > 1) = %d\n", a, b, a, c);

    c = !((a < b) && (a > 1));
    printf ("!((%d < %d) && (%d > 1)) = %d\n", a, b, a, c);

    c = !((a < b) || (a > 1));
    printf ("!((%d < %d) || (%d > 1)) = %d\n", a, b, a, c);


    return 0 ;
}