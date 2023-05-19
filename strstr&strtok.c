#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "ini adalah contoh kalimat yang mengandung kata contoh";
    char substr[10] = "contoh";
    char *ptr, *token;

    ptr = strstr(str, substr); // mencari substring pertama

    while(ptr != NULL) {
        token = strtok(ptr, " "); // memproses substring menjadi token
        while(token != NULL) {
            printf("%s\n", token); // melakukan proses pada setiap token
            token = strtok(NULL, " "); // lanjut ke token selanjutnya
        }
        ptr = strstr(ptr + 1, substr); // mencari substring berikutnya
    }

    return 0;
}
