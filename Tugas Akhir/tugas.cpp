#include <stdio.h>
int main()
{
    int jari, rLuas, rVol;
    float pi, luas, volume;
    printf("Masukan Jari-jari:");scanf("%d", &jari);
    pi = 3.14;
    rLuas = jari*jari;
    rVol = jari*jari*jari;
    
    luas = 4*pi*rLuas;
    volume = 4/3*pi*rVol;
    printf("luas = %g\n",luas);
    printf("volume = %g\n",volume);
}