/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos de entrada y salida

    cap.1, variables, expresiones, iteraciones y decisiones
    modificación: contar palabras, if else, define
*/

#include <stdio.h>
//copia la entrada a la salida

main(){
    int c,nl;

    nl = 0;
    while((c=getchar())!=EOF)
        if(c=='\n')
            ++nl;
    printf("%d\n", nl);
}