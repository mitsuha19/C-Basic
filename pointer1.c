#include<stdio.h>

int main(){
    int x = 10;
    int *ptr;
    ptr = &x;

    printf("nilai dari x: %d\n", x);
    printf("alamat memori x: %d\n", &x);
    printf("nilai dari *ptr: %d\n", *ptr);
    printf("alamat memori yang ditunjuk oleh ptr: %d\n", ptr);

    return 0;
}