#include<stdio.h>

int main(){
    
    int n, i, a ;

    printf("masukkan jumlah bilangan : ");
    scanf("%d", &n);

    int arr[n];
    float average = 0 ;
    
    for (i = 0; i < n; i++)
    {
        a = i + 1 ;
        printf("masukkan nilai ke-%d : ", a);
        scanf("%d", &arr[i]);
        average += (float) arr[i] / n;
    }

    printf("%.2f", average);

    return 0;
}