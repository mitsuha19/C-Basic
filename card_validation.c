#include <stdio.h>

int main()
{
    int n;
    printf("Jumlah kartu yang ingin di cek: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan nilai elemen array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("CARD %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
      int card = arr[i];

      if (card / 10000 != 0 && card / 10000 < 10)
      {
        int digit_pertama = card/10000 ;
        int digit_kedua = (card / 1000) % 10 ;
        int digit_ketiga = (card / 100) % 10;
        int digit_keempat = (card / 10) % 10 ;
        int digit_terakhir = card % 10 ;

        if ((digit_terakhir > digit_pertama) &&
           (digit_kedua == digit_terakhir - digit_pertama) && 
           (digit_keempat == (digit_pertama + digit_terakhir) % 10 ) && 
           (digit_ketiga == (digit_kedua * digit_keempat) % 10) )
        { 
             printf("CARD %d : valid\n", i + 1);  
        }else
        {
             printf("CARD %d : Not valid\n", i + 1);
        } 
      }else
      {
         printf("CARD %d : Not valid\n", i + 1);
      }      
    }

    return 0;
}