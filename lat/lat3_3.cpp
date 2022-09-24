#include <stdio.h>

int main (){
    int x;
    printf ("Masukan Bilangan:"); scanf("%d", &x);

    if (x > 0)
    {
        printf(" x bilangan positif \n");
    }else if( x < 0)
    {
        printf("x bilangan positif \n");
    }else if(x == 0)
    {
        printf("x adalah bilangan 0\n");

    }else{
        printf("silahkan masukan bilangan dengan benar");
    }

    return 0;
}
