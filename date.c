#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int hari, bulan,tahun;
} date;

void inputtanggal(date *m){
    printf("Masukkan hari bulan tahun: ");
    scanf("%d %d %d", &m->hari, &m->bulan, &m->tahun);
}

void printdata(date *m){
    printf("%.2d %.2d %.2d", m->hari, m->bulan, m->tahun);
}

int kabisat(date *m){
    
    if ((m->tahun % 400 == 0) || ((m->tahun % 4 == 0) && (m->tahun % 100 != 0)))
    {
        return 1;
    }else
    {
        return 0;
    }
}

void sogot(date *m){

    if ((m->bulan == 1 ||
    m->bulan == 3 ||
    m->bulan == 5 ||
    m->bulan == 7 ||
    m->bulan == 8||
    m->bulan == 10) && (m->hari == 31))
    {
        m->hari = 1;
        m->bulan++;
    }else if ((m->bulan == 4 ||
    m->bulan == 6 ||
    m->bulan == 9 ||
    m->bulan == 11) && (m->hari == 30))
    {
        m->hari = 1;
        m->bulan++; 
    }else if (m->bulan == 12 && m->hari == 31)
    {
        m->hari = 1;
        m->bulan = 1;
        m->tahun++;
    }else if (m->bulan == 2 && kabisat(m) && m->hari == 29)
    {
        m->hari = 1;
        m->bulan++; 
    }else if (m->bulan == 2 && !kabisat(m) && m->hari == 28)
    {
        m->hari = 1;
        m->bulan++; 
    }
    else
    {
        m->hari++;
    }
}

void natoari(date *m){

    if ((m->bulan == 5 || 
         m->bulan == 7 || 
         m->bulan == 8 || 
         m->bulan == 10 || 
         m->bulan == 12) && (m->hari == 1))
    {
        m->hari = 30;
        m->bulan--;
    }else if ((m->bulan == 4 || 
               m->bulan == 6 || 
               m->bulan == 9 || 
               m->bulan == 11 || 
               m->bulan == 2) && (m->hari == 1))
    {
        m->hari = 31;
        m->bulan--;
    }else if (m->bulan == 3 && kabisat(m) && m->hari == 1)
    {
        m->hari = 29;
        m->bulan--;
    }else if (m->bulan == 3 && !kabisat(m) && m->hari == 1)
    {
       m->hari = 28;
        m->bulan--;
    }else if (m->bulan == 1 && m->hari == 1)
    {
        m->hari = 31;
        m->bulan = 12;
        m->tahun--;
    }else
    {
        m->hari--;
    }
    
}

int main(){
    date *m1 = malloc(sizeof(date));
    inputtanggal(m1);

    date besok = *m1;
    date semalam = *m1;

    printf("Tanggal Sebelumnya: ");
    natoari(&semalam);
    printdata(&semalam);

    printf("\nTanggal Sekarang: ");
    printdata(m1);

    printf("\nTanggal Selanjutnya: ");
    sogot(&besok);
    printdata(&besok);
    
    return 0;
}