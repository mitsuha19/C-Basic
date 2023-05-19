#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *str);

int main()
{
    char * string = (char*) malloc(100 * sizeof(char));
    printf("Masukkan array (string): ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';
    reverse(string);
    printf("Reversed: %s", string);
    free (string);
    return 0;
}

void reverse(char *str)
{
    int n = strlen(str);
    char * temp = (char*) malloc((n + 1) * sizeof(char)); 
    strcpy(temp, str); 
    for (int i = 0; i < n/2; i++) {
        char c = temp[i];
        temp[i] = temp[n-1-i];
        temp[n-1-i] = c;
    }
    strcpy(str, temp); 
    free(temp); 
}
