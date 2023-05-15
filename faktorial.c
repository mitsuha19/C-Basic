#include<stdio.h>

int faktorial(int n){

    if (n == 1)
    {
        return 1 ;
    } else
    {
        return n * faktorial(n-1);
    }

}
int main(){

    int x;
    scanf("%d",&x);
    printf("%d", faktorial(x));
    return 0;
}