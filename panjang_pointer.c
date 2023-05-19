#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int panjang(char *ptr);

int main(){
    char *string = (char*) malloc(100 * sizeof(char));
    printf("masukkan array (string): ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    int hasil = panjang(string);
    printf("Panjang string : %d", hasil);
    free(string);
    return 0;
}

int panjang(char *ptr){
    int n = strlen(ptr);
    char * temp = (char*) malloc((n + 1) * sizeof(char));
    int jumlah = 0;
    strcpy(temp, ptr); 
    for (int i = 0; i < n; i++)
    {
        if (temp[i] != '\0' && temp[i] != '\n')
        {
            jumlah ++;
        }
        
    }
    return jumlah;
    strcpy(ptr, temp); 
    free(temp);
}