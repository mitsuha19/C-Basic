#include<stdio.h>
#include<string.h>

int jalan (char huruf, int x, int y);
void pulang(char huruf[]);


int main(){
    char huruf[100];

    printf("Masukkan kata: ");
    scanf("%s", huruf);

    pulang(huruf);
    return 0;
    }

int jalan(char huruf, int x, int y){
    if(x== 0 && y == 0){
        if (huruf == 'R') return 1;
        else return 0;

    } else if(x == 1 && y == 0){
        if (huruf == 'R') return 1;
        else if (huruf == 'T') return 1; 
        else return 0;

    } else if(x == 2 && y == 0){
        if (huruf == 'R') return 1;
        else if (huruf == 'T') return 1;
        else if (huruf == 'L') return 1;
        else return 0;

    } else if(x == 3 && y == 0){
        if (huruf == 'T') return 1;
        else if (huruf == 'L') return 1;
        else return 0;

    } else if(x == 1 && y == 1){
        if (huruf == 'B') return 1;
        else if (huruf == 'T') return 1;
        else if(huruf == 'R') return 1;
        else return 0;

    } else if (x == 1 && y == 2){
        if (huruf == 'B') return 1;
        else if (huruf == 'R') return 1;
        else return 0;

    } else if (x == 2 && y == 1){
        if (huruf == 'B') return 1;
        else if  (huruf == 'R') return 1;
         else if (huruf == 'L') return 1;
        else return 0;

    } else if (x == 3 && y == 1){
        if(huruf == 'B') return 1;
         else if (huruf == 'L') return 1;
         else if (huruf == 'T') return 1;
        else return 0;

    } else if (x == 3 && y == 2){
        if(huruf == 'R') return 1;
        else if (huruf == 'L') return 1;
        else if (huruf == 'B') return 1;
        else return 0;

    } else if (x == 4 && y == 2){
        return 2;
    }
}

void pulang(char huruf[]){
    int x = 0, y = 0 ;
    for(int i = 0; i < strlen(huruf); i++){
        if (jalan(huruf[i], x, y) == 2){
            x = 0;
            y = 0;
            break;
        }
        
        else if(huruf[i] == 'R'){
            if (jalan (huruf[i], x, y) == 1 && x == 1 && y == 2){
                x+=2;
            }
            else if(jalan(huruf[i], x, y) == 1){
                x++;
            }
            else {
                break;
            }
            } else if(huruf[i] == 'L'){
                if (jalan (huruf[i], x, y) == 1 && x == 3 && y == 2){
                    x-=2;
                }
            
                else if(jalan(huruf[i], x, y) == 1){
                x--;
            }
            
            else {
                break;
            }
            }
            else if(huruf[i] == 'T'){
                if(jalan(huruf[i], x, y) == 1 ){
                    y++;
                }
                else {
                break;
            }
            }
             else if(huruf[i] == 'B'){
                if(jalan(huruf[i], x, y) == 1 ) {
                    y--;
                }
                else {
                break;
            }
            }
            else {
                break;
            }
        
    }
    if( x== 4 && y == 2){
            printf("Benar");
            }
            else {
            printf("Salah");
            }
}