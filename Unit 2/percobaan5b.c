#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

// while (i <= 3), artinya pengulangan akan dilakukan selama i kurang atau sama dengan 3
// while (j <= 2), artinya pengulangan akan dilakukan selama j kurang atau sama dengan 2
// untuk urutan loop sama seperti for