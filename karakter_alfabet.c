#include<stdio.h>

int main(){
    
    char i;

    scanf("%c",&i);

    if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
    {
        printf("Alfabet");
    } else
    {
        printf("Bukan Alfabet");
    }
    
    return 0;
}