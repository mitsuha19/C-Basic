#include<stdio.h>

struct mahasiswa
{
    char nama[100];
    char nim[9];
    float ipk;
};

int main(){
    struct mahasiswa mhs1;

    printf("Masukkan nama mahasiswa: ");
    scanf("%s", mhs1.nama);

    printf("Masukkan nim mahasiswa: ");
    scanf("%s", mhs1.nim);

    printf("Masukkan IPK mahasiswa: ");
    scanf("%f", &mhs1.ipk);

    printf("Data Mahasiswa: \n");
    printf("Nama : %s\n", mhs1.nama);
    printf("Nim : %s\n", mhs1.nim);
    printf("IPK : %.2f\n", mhs1.ipk);
   
   return 0;
}
