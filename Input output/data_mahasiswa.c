#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct 
{
    char nim[9];
    char nama[25];
    float ipk;
}mahasiswa;

int main(){
    mahasiswa mhs[100];
    FILE *pF = fopen("mahasiswa.txt" , "r");

    char line[100];
    fgets(line,100, pF);
    int a = 0;

    while ( fgets(line,100, pF) != NULL)
    {
        char *token = strtok(line, "#");
        strcpy(mhs[a].nim ,token); 

        token = strtok(NULL, "#");
        strcpy(mhs[a].nama, token); 

        token = strtok(NULL, "#");
        mhs[a].ipk = atof(token);
        a++;
    }
    fclose(pF);

    fopen("data_akhir.txt" ,"w");
    fprintf(pF, "Jumlah Data Mahasiswa : %d\n", a);
    for (int i = 0; i < a; i++)
    {
        fprintf(pF,"\n# Data Mahasiswa %d\n", i+1);
        fprintf(pF,"Nim : %s\n", mhs[i].nim);
        fprintf(pF,"Nama : %s\n", mhs[i].nama);
        fprintf(pF,"IPK : %.2f\n", mhs[i].ipk);
    }

    fclose(pF);
    return 0;
}