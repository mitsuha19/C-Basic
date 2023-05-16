#include<stdio.h>

int main(){
    int n ;

    printf("masukkan jumlah nilai : ");
    scanf("%d", &n);

    int arr[n];
    int a, jumlah, max = 0, modus = 0 ;
    

    for (int i = 0; i < n; i++)
    {
        a = i + 1 ;
        printf("masukkan nilai ke-%d : ", a);
        scanf("%d", &arr[i]);

    }

    for (int i = 0; i < n; i++)
    {
        jumlah = 0 ;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {  
              jumlah ++;  
            }
            
        }

        if ((jumlah > max ) || (jumlah == max && arr[i] > modus ))
        {
            max = jumlah ;
            modus = arr[i];
        }
        
    }
    
    printf("Modus : %d\n", modus);
    

    return 0 ;
}