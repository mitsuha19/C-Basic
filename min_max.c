#include<stdio.h>

int main(){
    int n;
    int nilai ;
    int max = -999999;
    int min = 999999;

    printf("masukkan jumlah nilai yang ingin dimasukkan:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
      printf("masukkan nilai ke-%d : ", i);
      scanf("%d",&nilai);

      if (nilai > max)
      {
        max = nilai ;
      }
      if (nilai < min)
      {
        min = nilai;
      }
    }
    
    printf("MIN : %d\n",min);
    printf("MAX : %d",max);
    return 0;
}