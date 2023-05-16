#include<stdio.h>

int main(){
    int n = 0 ;
    scanf("%d", &n);
    int arr[n];
    int a;

    for (int i = 0; i < n; i++)
    {   
        a = i + 1;
        printf("nilai ke %d : ", a);
        scanf("%d", &arr[i]);

    }

    for (int i = 0; i < n; i++)
    {   
        a = i + 1;
        printf("%d ", arr[n - a]);
    }
    
    
    return 0;
}