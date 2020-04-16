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
principal                                                       // Unidad de programa principal
vector(entero) vE = {1,2,3,4};
matriz2D(real) matR = {{1.1,2.2,3.3},{4.4,6.6}};
limpiar;                                                        // Limpia la pantalla.
paraCada(x,matR)
    paraCada(y,x)
        mostrar << y << tabulado;
        finPara
    mostrar << salto;
    finPara
insertaEleVDim(vE,5);
agregaEleVDim(vE,6);
intercalaEleVDim(vE,7,3);
paraCada(x,vE)
    mostrar << x << tabulado;
    finParaCada
mostrar << salto;
paraCada(x,matR)
    agregaEleVDim(x,10);
    insertaEleVDim(x,-110);
    intercalaEleVDim(x,500,x.size()/2);
    paraCada(y,x)
        mostrar << y << tabulado;
        finPara
    mostrar << salto;
    finParaCada
mostrar << salto;
paraCada(x,matR)
    paraCada(y,x)
        y = x.at();
        mostrar << y << tabulado;
        finPara
    mostrar << salto;
    finParaCada
mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                