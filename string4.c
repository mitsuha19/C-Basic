#include<stdio.h>

void printname(char name[]){
    printf("%s\n", name);
}
int main(){
    char name[100]= "Abdullah Ubaid";
    printname(name);
    return 0;
}