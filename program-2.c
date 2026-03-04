#include <stdio.h>
#include <math.h>

int main() {
    double phi = 3.14;
    float jari_jari = 2;
    float tinggi_torren = 6;

    // mencari volume toren
    int volume = phi * (jari_jari * jari_jari) * tinggi_torren;
    printf("%i\n", volume);
    return 0;
}