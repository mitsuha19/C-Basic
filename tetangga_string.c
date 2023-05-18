#include<stdio.h>
#include<string.h>

void tetangga(char kata[]);

int main(){
    char kata[100];
    printf("Masukkan kata : ");
    fgets(kata, 100,stdin);

    tetangga(kata);
    return 0;
}

void tetangga(char kata[]){
    char tetangga1[100];
    char tetangga2[100];
    strcpy(tetangga1, kata);
    strcpy(tetangga2, kata);

    for (int i = 0; kata[i] != '\0'; i++)
    {
        if (kata[i] == 'z')
        {
            kata[i] = 'a';
        }else if (kata[i] == ' ')
        {
            kata[i] = kata[i];
        }
        
        else
        {
            kata[i] = kata[i] + 1 ;
        }
    }

    for (int i = 0; tetangga1[i] != '\0'; i++)
    {
        if (tetangga1[i] == 'a')
        {
            tetangga1[i] = 'z';
        }else if (tetangga1[i] == ' ')
        {
            tetangga1[i] = tetangga1[i];
        }
        
        else
        {
            tetangga1[i] = tetangga1[i] - 1 ;
        }
    }

    printf("%s\n", tetangga1);
    printf("%s", tetangga2);
    printf("%s", kata);

    
}