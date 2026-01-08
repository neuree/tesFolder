// Nama : Neuree Daniela Gianik Siagian
// NIM : 41424021
// PRODI : D-IV Teknologi Rekayasa Perangkat Lunak

#include <stdio.h>
int main(){
    int x,y,hasil,sisa;
     //input data
     printf("masukkan x :");
    scanf("%d",&x);
    printf("masukkan y :");
    scanf("%d",&y);

//pembagi
    hasil = x/y;
    printf("hasil bagi:%d\n",hasil);
//modulus
   sisa = x % y;
    printf("sisa bagi: %d\n",sisa);

   return 0;
}