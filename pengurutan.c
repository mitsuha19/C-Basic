#include<stdio.h>

int main(){
    int n ;

    printf("masukkan jumlah nilai : ");
    scanf("%d", &n);

    int arr[n];
    int a ;
    int swap ;

    for (int i = 0; i < n; i++)
    {
        a = i + 1;
        printf("masukkan nilai ke-%d : ", a);
        scanf("%d", &arr[i]);

    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
          if (arr[j] < arr[j - 1])
          {
            swap = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = swap ;
          }
          
        }
        
    }
    
    printf("array yang telah diurutkan : ");
    for (int i = 0; i < n; i++)
    {
       printf("%d ", arr[i]);
    }
    return 0 ;
}