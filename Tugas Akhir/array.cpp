#include<stdio.h>
#include <cstdlib>
void printArray(int [ ][3]);
using namespace std;
int main(){
    int a,x,z,y,m;
    int matrik1 [2][3];
    int baris, kolom;
    for(baris=1; baris <= 3; baris++){
    for(kolom=1; kolom <= 3; kolom++)
    {
    printf ("Input Baris ");
    printf("%d", baris);
    printf(" kolom ");
    printf("%d", kolom);
    printf(" = ");
    scanf ("%d",&matrik1[baris][kolom]);
    }
    }
    printArray(matrik1);
 

}

void printArray(int a [ ][3]){
    int i,j;
    printf("Matriks 3x3 : \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
            printf("%d", a[i][j]);
            printf("\n");
    
    }
  	exit(1);
}