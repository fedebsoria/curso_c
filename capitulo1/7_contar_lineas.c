/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos de entrada y salida

    cap.1, variables, expresiones, iteraciones y decisiones
    modificación: contar líneas, sentencia if
*/

#include <stdio.h>

main(){
    int c,nl;

    nl=0;
    while((c=getchar())!=EOF)
        if(c=='\n')
            ++nl;
    printf("%d\n",nl);
}