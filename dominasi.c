#include<stdio.h>

int main(){
    int n ;
    int a ;
    printf("masukkan jumlah nilai : ");
    scanf("%d", &n);

    int arr[n] ;
    int positif, negatif, nol ;
    float jumlah_positif = 0, jumlah_negatif = 0, jumlah_nol = 0;

    for (int i = 0; i < n; i++)
    {
        a = i + 1;
        printf("masukkan nilai ke-%d : ", a);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
           positif++ ; 
        }
        if (arr[i] == 0)
        {
           nol++ ;
        }
        if (arr[i] < 0)
        {
            negatif++;
        }
    }

    jumlah_positif = (float) positif / n ;
    jumlah_negatif = (float) negatif / n ;
    jumlah_nol = (float) nol / n ;

    printf("%.6f \n%.6f \n%.6f ", jumlah_positif, jumlah_negatif, jumlah_nol);

    return 0 ;
}