#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 5;

    //penggunaan malloc
    int *ptr1 = (int*)malloc(n * sizeof(int));
    if (ptr1 == NULL)
    {
        printf("memory tidak bisa dialokasikan\n");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        ptr1[i] = i + 1;
    }
    printf("Nilai-nilai setelah pemakaian malloc:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, " ,ptr1[i]);
    }

    //penggunaan calloc
    int *ptr2 = (int*)calloc(n, sizeof(int));
    if (ptr2 == NULL)
    {
        printf("memory tidak bisa dialokasikan\n");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        ptr2[i] = i + 1 ;
    }
    printf("\nNilai-nilai setelah pemakaian calloc:\n");
    for (int i = 0; i < n; i++)
    {
         printf("%d, " ,ptr2[i]);
    }

    // penggunaan realloc
    ptr1 = (int*)realloc(ptr2, 2 * n * sizeof(int));
    if (ptr1 == NULL)
    {
         printf("memory tidak bisa dialokasikan\n");
        exit(0);
    }
    for (int i = 0; i < 2 * n ; i++)
    {
        ptr1[i] = i + 1;
    }
    printf("\nNilai-nilai setelah pemakaian realloc:\n");
    for (int i = 0; i < 2 * n ; i++)
    {
        printf("%d, ",ptr1[i] );
    }
    
    free(ptr1);
    free(ptr2);
    return 0;
}