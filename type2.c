#include<stdio.h>
#include<string.h>

struct mahasiswa
{
    char nim[9];
    char nama[50];
    int umur;
};

void tampildata(struct mahasiswa mhs){
    printf("NIM: %s\n", mhs.nim);
    printf("Nama: %s\n", mhs.nama);
    printf("Umur: %d\n", mhs.umur);
}

int main(){
    struct mahasiswa mhs1 = {"11S22036", "Rohit Panjaitan", 18};
    tampildata(mhs1);
    return 0;
}