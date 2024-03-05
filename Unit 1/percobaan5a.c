#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

//dalam kode ini scanf hanya dapat membaca satu kata sehingga inputan kata setelah spasi tidak dianggap