#include<stdio.h>

int main(){

    int n ;
    printf("masukkan panjang array : ");
    scanf("%d", &n);

    int arr[n][n];
    int diagonal1[n];
    int diagonal2[n];
    int selisih ;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("masukkan nilai array baris-%d kolom-%d: ",i + 1, j + 1 );
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        diagonal1[i] = arr[i][i];
        diagonal2[i] = arr[i][n - i - 1];
    }
    
    for (int i = 0; i < n; i++)
    {
        selisih += diagonal1[i] - diagonal2[i];
    }

    if (selisih < 0)
    {
        selisih = -selisih ;
    }
    
    printf("selisih = %d", selisih);
    
    return 0;
}