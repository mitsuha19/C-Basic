#include<stdio.h>
#include<string.h>

struct mahasiswa
{
    char nama[100];
    char nim[9];
    float ipk;
};

//fungsi untuk mengisi data mahasiswa
struct mahasiswa inputdatamahasiswa()
{
 struct mahasiswa mhs;
 printf("Masukkan nama Mahasiswa: ");
 scanf("%s", mhs.nama);   
 printf("Masukkan NIM Mahasiswa: ");
 scanf("%s", mhs.nim);
 printf("Masukkan IPK Mahasiswa: ");
 scanf("%f", &mhs.ipk);

 return mhs;  
}

//fungsi untuk menampilkan data mahasiswa
void tampildatamahasiswa(struct mahasiswa mhs){
    printf("Nama mahasiswa : %s\n", mhs.nama);
    printf("NIM mahasiswa : %s\n", mhs.nim);
    printf("IPK mahasiswa : %.2f\n", mhs.ipk);
}

int main(){
    struct mahasiswa mhs = inputdatamahasiswa();
    tampildatamahasiswa(mhs);
    return 0; 
}
