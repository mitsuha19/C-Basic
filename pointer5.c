#include<stdio.h>
#include<stdlib.h>

// fungsi untuk mencari posisi elemen tertentu dalam array
int *cari_elemen(int *arr, int ukuran, int elemen){
    for (int i = 0; i < ukuran; i++)
    {
        if (arr[i] == elemen)
        {
            return &arr[i]; // mengembalikan alamat dari elemen yang ditemukan
        }
        
    }
    return NULL; // mengembalikan NULL jika elemen tidak ditemukan
}

int main(){
    int arr[] = {1,2,3,4,5};
    int ukuran = sizeof(arr) / sizeof(arr[0]);
    int elemen = 4;

    int *ptr = cari_elemen(arr, ukuran, elemen);
    if (ptr == NULL)
    {
        printf("elemen %d tidak ditemukan\n", elemen);
    } else
    {
        printf("Elemen %d ditemukan pada posisi %d\n", elemen, ptr - arr);
    }
    return 0;
}