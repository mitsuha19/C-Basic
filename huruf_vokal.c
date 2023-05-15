#include<stdio.h>
#include<ctype.h>

int main(){

    char huruf;

    scanf("%c",&huruf);
    huruf = toupper (huruf);

    if ((huruf == 'A') || (huruf == 'I') || (huruf == 'U') || (huruf == 'E') || (huruf == 'O') )
    {
        printf("Vokal");
    } else
    {
        printf("Bukan Vokal");
    }
    
    
    return 0;
}