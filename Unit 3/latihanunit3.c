#include <stdio.h>

int main() {
    int jumlah;
    int i;
    int total = 0;

    printf("jumlah elemen: ");
    scanf("%d", &jumlah);

    int arr[jumlah]; 
    
    for (i = 0; i < jumlah; i++) {
        printf("elemen ke - %d= ", i+1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    
    printf("total = %d\n", total);

    return 0;
}
