#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="algorytm";
    char z = *(napis+3); //z=
    int a = napis[5]; // a=   ,z=
    z++; // a=   ,z=
    int b= a++; // a=   , b=  ,z=
    a=a-4; // a=   , b=  ,z=
    z-=5; // a=   , b=  ,z=
    z=(a-=2)+3; // a=   , b=  ,z=
    return 0;
}

