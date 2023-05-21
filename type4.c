#include<stdio.h>
#include<string.h>

struct mahasiswa
{
    char nim[9];
    char nama[100];
    float ipk;
};

void inputdata(struct mahasiswa *m){
    printf("Masukkan NIM: ");
    scanf("%s", m->nim );

    printf("Masukkan Nama: ");
    scanf("%s", m->nama );

    printf("Masukkan IPK: ");
    scanf("%f", &m->ipk );
}

void printdata(struct mahasiswa *m){
    printf("NIM : %s\n", m->nim);
    printf("Nama : %s\n", m->nama);
    printf("IPK : %.2f\n", m->ipk);
}

int main(){
    struct mahasiswa m1;
    struct mahasiswa *ptr;
    ptr = &m1;

    inputdata(ptr);
    printdata(ptr);

    return 0;
}