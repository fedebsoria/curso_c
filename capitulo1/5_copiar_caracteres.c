/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos de entrada y salida

    cap.1, variables, expresiones, iteraciones y decisiones
    herramientas: getchar, putchar
*/

#include <stdio.h>
//copia la entrada a la salida

main(){
    int c;

    c=getchar();
    while (c!=EOF){
        putchar(c);
        c=getchar();
    }
}