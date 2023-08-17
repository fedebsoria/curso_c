/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos de entrada y salida

    cap.1, variables, expresiones, iteraciones y decisiones
    modificación: contar carácteres
*/

#include <stdio.h>
//copia la entrada a la salida

main(){
    long nc;
    nc = 0;

    while(getchar()!=EOF)
        ++nc;

    printf("%ld\n",nc);
}