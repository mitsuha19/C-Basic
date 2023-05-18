#include<stdio.h>

int main(){
    char name[100] ;
    printf("Masukkan nama kamu: ");
    fgets(name, sizeof(name), stdin);
    printf("Nama Kamu : %s\n", name);   
    return 0;
}

