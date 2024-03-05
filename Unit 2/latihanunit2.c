#include <stdio.h>

int main() {
    int jumlah;
    int nominal;
    int total=0;

    scanf("%d", &jumlah);

    if (jumlah <= 0) {
        printf("Tidak ada transaksi hari ini");
        return 0;
    }

    for (int i = 0; i < jumlah; i++) {
        scanf("%d", &nominal);
        total += nominal;
    }

    printf("%d\n", total);

    return 0;
}
