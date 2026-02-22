#include <stdio.h>
#include <math.h>

int main() {
    float hpp = 27000;
    float harga_jual = 60000;
    float diskon = 0.1;
    float pajak_genap = 0.2;
    float pajak_ganjil = 0.125;

    /* diskon awal 10% dan akan turun setengah tiap diskon sampai diskon 
    ketujuh*/
    float diskon_hpertama = 0.10;
    float diskon_hkedua = 0.05;
    float diskon_hketiga = 0.025;
    float diskon_hkeempat = 0.0125;
    float diskon_hkelima = 0.00625;
    float diskon_hkeenam = 0.003125;
    float diskon_hketujuh = 0.0015625;

    // perhitungan pendapatan dipotong pajak
    float hari_pertama =  (harga_jual * (1 - diskon_hpertama) * (1 - pajak_ganjil) - hpp);
    float hari_kedua = (harga_jual * (1 - diskon_hkedua) * (1 - pajak_genap) - hpp);
    float hari_ketiga = (harga_jual * (1 - diskon_hketiga) * (1 - pajak_ganjil) - hpp);
    float hari_keempat = (harga_jual * (1 - diskon_hkeempat) * (1 - pajak_genap) - hpp);
    float hari_kelima = (harga_jual * (1 - diskon_hkelima) * (1 - pajak_ganjil) - hpp);
    float hari_keenam = (harga_jual * (1 - diskon_hkeenam) * (1 - pajak_genap) - hpp);
    float hari_ketujuh = (harga_jual * (1 - diskon_hketujuh) * (1 - pajak_ganjil) - hpp);

    // hasil
    int jumlah = hari_pertama + hari_kedua + hari_ketiga + hari_keempat + hari_kelima + hari_keenam + hari_ketujuh;
    printf("hasil: %d", jumlah);
}