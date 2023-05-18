#include<stdio.h>

int pangkat(int a, int n);
int main(){
    int result = pangkat(2 , 5);
    printf("Nilai: %d", result);
    return 0;
}

int pangkat(int a, int n){
    if(n == 0) return 1;
    return a * pangkat(a, n-1);
}