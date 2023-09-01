/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Uso de los arreglos para el conteo de diferentes carácteres.

    Cap. 2: funciones, parámetros.
    Herramientas: funciones.
*/

#include <stdio.h>

int power(int base, int n);

int main(){
    int i,result;

    for(i=0;i<10;++i)
        printf("%d %d %d\n",i,power(2,i),power(-3,i));
    return 0;
}

int power(int base, int n){
    int i,p;

    p=1;
    for(i=1;i<=n;++i)
        p=p*base;
    return p;
}