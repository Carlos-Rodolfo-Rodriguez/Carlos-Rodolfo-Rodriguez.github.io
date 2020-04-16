/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: 
*/
constante entero TAM = 5;

principal                                                       // Unidad de programa principal
arreglo(entero,TAM) vE = {4,3,2,1};
arreglo2D(real,TAM-1,TAM+1) mR = {1,2,3,4,5,6,7,8};
arreglo3D(real,TAM-1,TAM+1,TAM+2) mR3 = {1,2,3,4,5,6,7,8};
limpiar;                                                        // Limpia la pantalla.
paraCada(x,vE)
    mostrar << x << tabulado;
    finParaCada
mostrar << salto;
int f;
//variar(f,0,TAM-2,1)
//    int c;
//    variar(c,0,TAM-1,1)
//        mostrar << mR[f][c] << tabulado;
//        finVariar
//    mostrar << salto;
//    finVariar
paraCada(x,mR3)
    paraCada(y,x)
        paraCada(z,y)
            mostrar << z << tabulado;
            finParaCada
        mostrar << salto;
        finParaCada
    mostrar << salto;
    finParaCada
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                