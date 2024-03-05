#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

//dalam kode ini menggunakan fgets yang membaca inputan satu baris teks, sehingga kata setelah spasi dapat dibaca oleh program