#include<stdio.h> 
 
int main()
{
  int kode;
 
  printf("Masukan Kode (1 - 7) : "); scanf("%d", &kode);

  if (kode == 1)
  {
    printf("%d", kode);
    printf(" adalah Hari Senin");
  }else if(kode == 2)
  {
    printf("%d", kode);
    printf(" adalah Hari Selasa");
  }else if(kode == 3)
  {
    printf("%d", kode);
    printf(" adalah Hari Rabi");
  }else if(kode == 4)
  {
    printf("%d", kode);
    printf(" adalah Hari Kamis");
  }else if(kode == 5)
  {
    printf("%d", kode);
    printf(" adalah Hari Jumat");
  }else if(kode == 6)
  {
    printf("%d", kode);
    printf(" adalah Hari Sabtu");
  }else if(kode == 7)
  {
    printf("%d", kode);
    printf(" adalah Hari Minggu");
  }else{
    printf("%d", kode);
    printf(" tidak ada hari");
  }
  return 0;
}