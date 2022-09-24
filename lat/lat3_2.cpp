#include <stdio.h>
#include <string.h>

int main (){
    int x ;
    printf ("Masukan Bilangan : "); scanf("%d", &x);

    if (x > 0)
    {
       printf("x adalah bilangan positif");
    }else if( x < 0)
    {
        printf("x adalah bilangan negatif");
    }else if(x == 0)
    {
        printf("x adalah 0");
       
    }else{
        printf("silahkan masukan kode dengan benar");
    }

    return 0;
}
