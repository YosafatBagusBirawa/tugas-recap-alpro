#include <stdio.h>
float sisi;

float hitungKelilingPersegi(float sisi) {
    return 4 * sisi;
}

float hitungLuasPersegi(float sisi) {
    return sisi * sisi;
}

float hitungVolumeKubus(float sisi) {
    return sisi * sisi * sisi;
}

int main() {
    printf("masukan panjang sisi = ");
    scanf("%f", &sisi);

    float kelilingPersegi = hitungKelilingPersegi(sisi);
    float luasPersegi = hitungLuasPersegi(sisi);
    float volumeKubus = hitungVolumeKubus(sisi);

    printf("%f\n", kelilingPersegi);
    printf("%f\n", luasPersegi);
    printf("%f\n", volumeKubus);

    return 0;
}
