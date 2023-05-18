#include<stdio.h>
#include<string.h>

void jumlah(char kata[]);

int main(){

    char kata[100];

    printf("Masukkan kata : ");
    fgets(kata,100,stdin);

    jumlah(kata);
    return 0;
}

void jumlah(char kata[]){
    int vokal = 0;
    for (int i = 0; kata[i] != '\0'; i++)
    {
        if (kata[i] == 'A'|| kata[i] == 'I' || kata[i] == 'U' || kata[i] == 'E' || kata[i] == 'O' ||
            kata[i] == 'a'|| kata[i] == 'i' || kata[i] == 'u' || kata[i] == 'e' || kata[i] == 'o')
        {
            vokal ++;
        }
        
    }
    
    printf("%d", vokal);

}