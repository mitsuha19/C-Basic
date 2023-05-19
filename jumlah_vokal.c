#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int vokal(char *ptr);

int main(){
    char * string = (char*) malloc(100 * sizeof(char));
    printf("Masukkan array (string): ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    int hasil = vokal(string);
    printf("Jumlah vokal : %d", hasil);
    return 0;
}

int vokal(char *ptr){
    int n = strlen(ptr);
    char * kata = (char*) malloc((n + 1) * sizeof(char)); 
    strcpy(kata,ptr);
    int vokal = 0;

    for (int i = 0; i < n; i++)
    {
        if (kata[i] == 'A'|| kata[i] == 'I' || kata[i] == 'U' || kata[i] == 'E' || kata[i] == 'O' ||
            kata[i] == 'a'|| kata[i] == 'i' || kata[i] == 'u' || kata[i] == 'e' || kata[i] == 'o')
        {
            vokal++;
        }
        
    }
    strcpy(ptr,kata);
    return vokal;
    free(kata);
}