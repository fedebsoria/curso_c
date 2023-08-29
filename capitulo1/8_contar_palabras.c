/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos de entrada y salida

    cap.1, variables, expresiones, iteraciones y decisiones
    modificación: contar palabras, if else, define
*/

#include <stdio.h>
//copia la entrada a la salida
#define IN 1 // Está dentro de la palabra
#define OUT 0 // Está fuera de la palabra

main(){
    int c,nl,nw,nc,state;

    state=OUT;
    nl=nw=nc=0;

    while((c=getchar())!=EOF){
        ++nc;
        if(c=='\n'){
            ++nl;
        }
        if(c==' ' || c=='\n' || c=='\t'){
            state=OUT;
        }
        else if(state==OUT){
            ++nw;
            state=IN;
        }
    }
    printf("Contador: %d %d %d\n", nl,nw,nc);
}