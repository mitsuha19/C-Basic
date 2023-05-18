#include<stdio.h>
#include<string.h>

int main(){
    char firstname[100] = "Abdullah";
    char lastname[100] = " Ubaid";

    strcat(firstname, lastname);
    printf("Hasil Penggabungan string : %s\n", firstname);

    int compare = strcmp(firstname, lastname) ;
    if (compare == 0)
    {
        printf("string sama\n");
    }else if (compare <0)
    {
        printf("string berbeda, dengan firstname lebih kecil dari lastname \n");
    } else
    {
        printf("String berbeda, dengan firstname lebih besar dari lastname\n ");
    }
    
    char fullname[100] ;
    strcpy(fullname, firstname);
    printf("Hasil salinan: %s\n", fullname);

    int len = strlen(fullname);
    printf("Panjang dari string '%s' adalah %d\n", fullname, len);

    strrev(fullname);
    printf("Reverse string: %s\n", fullname);
    
    return 0;
}