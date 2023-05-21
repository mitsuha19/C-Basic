#include<stdio.h>

struct Rectangle
{
    float panjang, lebar;
};

struct Rectangle inputnilai(){
    struct Rectangle persegi ;

    printf("Masukkan panjang: ") ;
    scanf("%f", &persegi.panjang);

    printf("Masukkan lebar: ") ;
    scanf("%f", &persegi.lebar);

    return persegi;
}

void tampilkandata(struct Rectangle persegi){
    float luas = persegi.lebar * persegi.panjang;
    float keliling = persegi.lebar * 2 +  persegi.panjang * 2;

    printf("Luas : %.2f\n", luas);
    printf("Keliling : %.2f\n", keliling);
}

int main(){
    struct Rectangle persegi = inputnilai();
    tampilkandata(persegi);
    return 0;
}