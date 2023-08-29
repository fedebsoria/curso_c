/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Uso de los arreglos para el conteo de diferentes carácteres.

    Cap. 2: arreglos, if-else, condiciones.
    Herramientas: arreglos.
*/

#include <stdio.h>
/* Cuenta digítos, espacios blancos u otros*/

main(){
    int c,i,nWhite,nOther;
    int nDigit[10];
    //definición array

    nWhite=nOther=0;
    for ( i = 0; i < 10; i++)
        nDigit[i]=0;    
    while((c=getchar())!=EOF){
        if (c>='0' && c<='9')
        {
            ++nDigit[c-'0'];
        }
        else if(c==' ' || c=='\n' || c=='\t')
            ++nWhite;
        else
            ++nOther;
        
    }

    //impresion por pantalla.
    printf("Digitos =");
    for ( i = 0; i < 10; i++)
        printf("%d",nDigit[i]);
    printf(", espacios blancos = %d, otros = %d.\n", nWhite, nOther);
}