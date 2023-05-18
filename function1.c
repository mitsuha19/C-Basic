#include<stdio.h>

int maxVal(int a, int b);
void printVal(int val);

int main(){
    printVal(maxVal(50,20));
    return 0;
}

int maxVal(int a, int b){
    if (a > b) return a;
    else return b;
}

void printVal(int val){
    printf("nilai: %d\n", val);
}