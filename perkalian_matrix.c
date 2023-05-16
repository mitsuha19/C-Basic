#include<stdio.h>

int main(){

    int n;
    printf("masukkan ordo matrix: ");
    scanf("%d", &n);

    int matrix1[n][n];
    int matrix2[n][n];
    int matrix3[n][n];

    printf("masukkan nilai untuk matrix pertama\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("masukkan nilai array baris-%d kolom-%d: ",i + 1, j + 1 );
            scanf("%d", &matrix1[i][j]); 
        }
        
    }

    printf("masukkan nilai untuk matrix kedua\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("masukkan nilai array baris-%d kolom-%d: ",i + 1, j + 1 );
            scanf("%d", &matrix2[i][j]); 
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           matrix3[i][j] = 0 ;
           for (int k = 0; k < n; k++)
           {
            matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
           }
           
        }
        
    }

    printf("hasil perkalian matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             printf("%d \n", matrix3[i][j]);
        }
        
    }
   
    return 0;
}