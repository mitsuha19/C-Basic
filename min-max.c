#include<stdio.h>

int main(){
    int n ;
    int a ;
    int max = -99999;
    int min = 99999;
    printf("masukkan jumlah nilai : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        a = i + 1;
        printf("masukkan nilai ke-%d : ", a);
        scanf("%d", &arr[i]);  

        if (arr[i] > max)
        {
            max = arr[i] ;
        }

        if (arr[i] < min)
        {
            min = arr[i] ;
        }
        
    }

    printf("MAX = %d\n" ,max);
    printf("MIN = %d" ,min);
    return 0;
}

 