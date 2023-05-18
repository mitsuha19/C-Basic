#include<stdio.h>
#include<string.h>

void kalimat(char kata[]);

int main(){
    char kata[100];
    printf("masukkan kata : ");
    fgets(kata,100,stdin);

    kalimat(kata);
    return 0;
}

void kalimat(char kata[]){
    printf("%s", strrev(kata));
}