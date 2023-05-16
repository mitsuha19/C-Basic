#include<stdio.h>

int main(){
    int n ;
    int a ;
    printf("masukkan jumlah nilai : ");
    scanf("%d", &n);

    int arr[n] ;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        a = i + 1;
        printf("masukkan nilai ke-%d : ", a);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int prima = 1;
       for (int j = 2; j <= (arr[i] / 2); j++)
       {
            if (arr[i] % j == 0)
            {
                prima = 0 ;
                break;
            }
       }
       if (prima && arr[i] > 1)
       {
        sum += arr[i];
       }
           
    }
    printf("%d " , sum);
    return 0;
}