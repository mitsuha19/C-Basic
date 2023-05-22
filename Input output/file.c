#include<stdio.h>

int main(){
    FILE *file_pointer;
    //membuka file untuk dibaca
    file_pointer = fopen("input.txt", "r");
    if (file_pointer == NULL)
    {
        printf("File tidak dapat dibuka\n");
        return 0;
    }

    int x;
    //membaca data dari file
    fscanf(file_pointer, "%d", &x);
    printf("Data dari file: %d\n", x);

    //menutup file
    fclose(file_pointer);

    //membuka file untuk ditulis
    file_pointer = fopen("output.txt", "w");
    if (file_pointer == NULL)
    {
        printf("File tidak dapat dibuka\n");
        return 0;
    }

    //menulis data ke file
    fprintf(file_pointer, "%d", x);

    //menutup file
    fclose(file_pointer);    
    
    return 0;
}