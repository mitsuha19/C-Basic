#include <stdio.h>
#include <string.h>

void sort(char word[]);

int main()
{
    char string[100];
    char *word;
    printf("Masukkan string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';
    
    word = strtok(string, " ");
    printf ("Sorted: ");
    while (word != NULL) {
        sort(word);
        printf("%s ", word);
        word = strtok(NULL, " ");
    }
    
    return 0;
}

void sort(char word[])
{
    int i, j, n;
    char temp;

    n = strlen(word);

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(word[i] > word[j])
            {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
}