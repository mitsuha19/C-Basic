#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void palindrome(char *ptr);

int main(){
    char * string = (char*) malloc(100 * sizeof(char));
    printf("Masukkan array (string): ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    palindrome(string);
    free(string);
    return 0;
}

void palindrome(char *ptr){
    int n = strlen(ptr);
    char * temp = (char*) malloc((n + 1) * sizeof(char)); 
    char * palindrome1 = (char*) malloc((n + 1) * sizeof(char)); 
    
    strcpy(temp, ptr);
    strcpy(palindrome1, strrev(ptr));

    if (strcmp(temp,palindrome1) == 0)
    {
        printf("Palindrome");
    }else
    {
        printf("Bukan Palindrome");
    }
    
    free(temp);
    free(palindrome1);
}