#include <stdio.h>
#include <math.h>

int main() {
    float hpp = 27000;
    float harga_jual = 60000;
    
    // pajak hari genap 20% dan hari ganjil 12.5%
    float pajak_genap = 0.2;
    float pajak_ganjil = 0.125;

    /* diskon awal 10% dan akan turun setengah tiap diskon sampai hari 
    ketujuh*/
    float diskon_hpertama = 0.10;
    float diskon_hkedua = 0.05;
    float diskon_hketiga = 0.025;
    float diskon_hkeempat = 0.0125;
    float diskon_hkelima = 0.00625;
    float diskon_hkeenam = 0.003125;
    float diskon_hketujuh = 0.0015625;

    // perhitungan pendapatan perhari dan perbarang
    float hari_pertama =  (harga_jual * (1 - diskon_hpertama) * (1 - pajak_ganjil) - hpp);
    float hari_kedua = (harga_jual * (1 - diskon_hkedua) * (1 - pajak_genap) - hpp);
    float hari_ketiga = (harga_jual * (1 - diskon_hketiga) * (1 - pajak_ganjil) - hpp);
    float hari_keempat = (harga_jual * (1 - diskon_hkeempat) * (1 - pajak_genap) - hpp);
    float hari_kelima = (harga_jual * (1 - diskon_hkelima) * (1 - pajak_ganjil) - hpp);
    float hari_keenam = (harga_jual * (1 - diskon_hkeenam) * (1 - pajak_genap) - hpp);
    float hari_ketujuh = (harga_jual * (1 - diskon_hketujuh) * (1 - pajak_ganjil) - hpp);

    // harga perbarang dan perhari
    printf("hari pertama: %.f\n", hari_pertama);
    printf("hari kedua: %.f\n", hari_kedua);
    printf("hari ketiga: %.f\n", hari_ketiga);
    printf("hari keempat: %.f\n", hari_keempat);
    printf("hari kelima: %.f\n", hari_kelima);
    printf("hari keenam: %.f\n", hari_keenam);
    printf("hari ketujuh: %.f\n", hari_ketujuh);

    // total keseluruhan
    int jumlah = hari_pertama + hari_kedua + hari_ketiga + hari_keempat + hari_kelima + hari_keenam + hari_ketujuh;
    printf("total keuntungan yang didapat adalah: %d\n", jumlah);

    // total penjualan dengan asumsi penjualan sebanyak 10 barang perheri
    float pendapatan_hari_pertama = (hari_pertama * 10);
    float pendapatan_hari_kedua = (hari_kedua * 10);
    float pendapatan_hari_ketiga = (hari_ketiga * 10);
    float pendapatan_hari_keempat = (hari_keempat * 10);
    float pendapatan_hari_kelima = (hari_kelima * 10);
    float pendapatan_hari_keenam = (hari_keenam * 10);
    float pendapatan_hari_ketujuh = (hari_ketujuh * 10);

    // pendapatan perhari
    printf("pendapatan hari pertama sebesar %.f\n", pendapatan_hari_pertama);
    printf("pendapatan hari kedua sebesar %.f\n", pendapatan_hari_kedua);
    printf("pendapatan hari ketiga sebesar %.f\n", pendapatan_hari_ketiga);
    printf("pendapatan hari keempat sebesar %.f\n", pendapatan_hari_keempat);
    printf("pendapatan hari kelima sebesar %.f\n", pendapatan_hari_kelima);
    printf("pendapatan hari keenam sebesar %.f\n", pendapatan_hari_keenam);
    printf("pendapatan hari ketujuh sebesar %.f\n", pendapatan_hari_ketujuh);

    // total pendapatan
    int jumlah_pendapatan = pendapatan_hari_pertama + pendapatan_hari_kedua + pendapatan_hari_ketiga + pendapatan_hari_keempat + pendapatan_hari_kelima + pendapatan_hari_keenam + pendapatan_hari_ketujuh;
    printf("total keuntungan yang didapat adalah: %d\n", jumlah_pendapatan);

    // kesimpulan untung atau rugi
    int result = (jumlah_pendapatan - (hpp * 7));
    printf("Keuntungam yang didapat adalah sebesar %d\n", result);

    return 0;
}