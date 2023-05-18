#include<stdio.h>

void panjang(char kata[]);

int main(){
    char kata[100];
    printf("Masukkan kata : ");
    fgets(kata, 100,stdin);
    
    panjang(kata);
    
    return 0;
}

void panjang(char kata[]){
    int jumlah = 0 ;

    for (int i = 0; kata[i] !='\0'; i++)
    {
        if (kata[i] != '\0' && kata[i] != '\n')
        {
            jumlah ++;
        }
        
    }
    
    printf("%d", jumlah );
}