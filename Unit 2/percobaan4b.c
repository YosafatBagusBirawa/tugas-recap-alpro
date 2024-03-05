#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

// diulang pada i=2 dengan pengulangan j=1 dan j=2 tidak sampai j=3 karena j <= 2
// lalu diulang lagi pada i=3 karena i++ dengan pengulangan j=1 dan j=2 tidak sampai j=3 karena j <= 2
// tidak ada i=4 karena i<=3