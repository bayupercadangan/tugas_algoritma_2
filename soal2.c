#include <stdio.h>
#include <string.h>

int main() {
  char kalimat1[20], kalimat2[20];

  printf("======================= PROGRAM DUA KALIMAT =======================\n");

  printf("Masukkan kalimat 1: ");
  scanf("%[^\n]%*c", kalimat1);

  printf("Masukkan kalimat 2: ");
  scanf("%[^\n]%*c", kalimat2);

  printf("======================= HASIL =======================\n");
  printf("Gabungan 2 buah inputan kalimat = %s %s \n", kalimat1, kalimat2);
  printf("Hasil membalik kalimat gabungan = %s \n", (kalimat1, kalimat2));
  printf("Jumlah Huruf kalimat pertama = %d \n", strlen(kalimat1));
  printf("Jumlah Huruf kalimat kedua = %d \n", strlen(kalimat2));
  printf("Total jumlah huruf = %d \n", strlen(kalimat1) + strlen(kalimat2));
  printf("Total perkalian kalimat = %d \n", strlen(kalimat1) * strlen(kalimat2));

  return 0;
}