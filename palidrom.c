#include<stdio.h>
#include<string.h>

void palindrome(char kata[]);

int main(){

    char kata[100];

    printf("Masukkan kata : ");
    scanf("%s", kata );

    palindrome(kata);
    return 0;
}

void palindrome(char kata[]){
    char balik[100];
    char awal[100];
    strcpy(awal, kata);
    strcpy(balik, strrev(kata));

    int compare = strcmp(awal, balik) ;
    if (compare == 0)
    {
        printf("Palindrome");
    }else
    {
        printf("Bukan Palindrome");
    }
    
}