#include<stdio.h>
#include<string.h>

void kapital(char kata[]);

int main(){
    char kalimat[100];

    printf("Masukkan kata : ");
    fgets(kalimat   ,100,stdin);

    kapital(kalimat);

    return 0;
}

void kapital(char kata[]){
    for (int i = 0; kata[i] !='\0' ; i++)
    {
        if (kata[i] >= 'a' && kata[i] <= 'z')
        {
            kata[i] = kata [i] - 32 ;
        }
        
    }
    printf("%s", kata);
}
