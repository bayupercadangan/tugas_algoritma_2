#include <stdio.h>

int main() {
  int a, b;

  printf("======================= PROGRAM DUA BILANGAN =======================\n");

  printf("Masukkan angka ganjil: ");
  scanf("%i", &a);

  printf("Masukkan angka genap : ");
  scanf("%i", &b);

  printf("A = %i, B = %i \n", a, b);

  if (a % 2 > 0 && b % 2 == 0) {
    printf("Jumlah: %i \n", a + b);
    printf("Rata-rata: %i \n", (a + b) / 2);
    printf("Kuadrat A = %i, Kuadrat B = %i \n", a * a, b * b);
  } else {
    printf("Angka yang anda masukkan tidak sesuai!");
  }

  return 0;
}