#include <stdio.h>
int main()
{
int panjang, lebar, luas, keliling;
printf ("Masukkan panjang :"); scanf ("%d", &panjang);
printf ("Masukkan lebar :"); scanf ("%d", &lebar);
luas=panjang*lebar;
keliling=2*(panjang+lebar);
printf ("Jadi luasnya adalah : %d\n",luas);
printf ("Jadi kelilingnya adalah : %d\n",keliling);
}

// #include<iostream>
// using namespace std;

// int main (){
//     //L = p x l
//     //K = 2 x (p + l)
//     double L, K, p, l;
//     cout<< "masukan p : "; cin>>p;
//     cout<< "masukan l : "; cin>>l;
//     L = p * l;

//     K = 2 * (p + l);
//     cout<<"L = "<<L<<endl;
//     cout<<"K = "<<K<<endl;
// }