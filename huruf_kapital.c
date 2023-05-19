#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void kapital(char *ptr);

int main(){
    char *string = (char*) malloc(100 * sizeof(char));
    printf("Masukkan array (string): ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';
    kapital(string);
    free(string);
    return 0;   
}

void kapital(char *ptr){
    int n = strlen(ptr);
    char * temp = (char*) malloc((n + 1) * sizeof(char));
    strcpy(temp, ptr);
    for (int i = 0; i < n; i++)
    {
        if (temp[i] >= 'a' && temp[i] <= 'z')
        {
            temp[i] = temp[i] - 32 ;
        }
        
    }
    strcpy(ptr, temp);
    printf("%s", ptr);
    free(temp);
}