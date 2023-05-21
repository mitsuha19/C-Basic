#include <stdio.h>
#include <string.h>

typedef struct
{
    char nim[9];
    char nama[50];
    float ipk;
} Mahasiswa;

void inputdata(Mahasiswa *m) {
    printf("masukkan NIM: ");
    scanf("%s", m->nim);

    printf("masukkan nama: ");
    scanf("%s", m->nama);

    printf("masukkan IPK: ");
    scanf("%f", &m->ipk);
}

void printdata(Mahasiswa *m){
    printf("NIM: %s\n", m->nim);
    printf("Nama: %s\n", m->nama);
    printf("IPK: %.2f\n", m->ipk);
}

int main(){
    Mahasiswa m1;
    Mahasiswa *ptr;
    ptr = &m1;
    inputdata(ptr);
    printdata(ptr);

    return 0;
}