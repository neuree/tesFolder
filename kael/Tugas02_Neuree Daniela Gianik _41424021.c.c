// Nama : Neuree Daniela Gianik Siagian
// NIM : 41424021
// PRODI : D-IV Teknologi Rekayasa Perangkat Lunak
#include <stdio.h>
int main(){
//harga barang
    int harga_sabun =8000,
    harga_shampoo =35000,
    harga_sabun_wajah=39000;

//jumlah barang yang dibeli
int sabun=2,
shampoo=2,
sabun_wajah=2;

//jumlah uang yang dipunya
int uang_yang_dimiliki=310000; 

//untuk perhitungan
int total_harga_sabun,
total_harga_shampoo,
total_harga_sabun_wajah;

//menghitung harga tiap barang
total_harga_sabun = harga_sabun*sabun;
total_harga_shampoo = harga_shampoo*shampoo;
total_harga_sabun_wajah= harga_sabun_wajah*sabun_wajah;

//untuk output
int total_pembelian,
sisa_uang;

//menghitung total semua barang
total_pembelian= total_harga_sabun + total_harga_shampoo + total_harga_sabun_wajah;

//menghitung sisa uang
sisa_uang = uang_yang_dimiliki - total_pembelian;

//hasil atau output
printf("total pembelian:Rp. %d\n",total_pembelian);
printf("sisa uang / kembalian = Rp. %d\n",sisa_uang);

return 0;
}