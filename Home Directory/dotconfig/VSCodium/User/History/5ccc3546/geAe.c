#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int numarcuvinte;
    char caracter;
    numarcuvinte = 0;

    fin = fopen( "cuvinte.in", "r" );
    caracter = fgetc( fin );
    while( caracter != '\n' ){
        if( caracter == ',' ){
            caracter = fgetc( fin ); //citeste spatiu
            numarcuvinte++;
        }
        if( caracter == '.' ){
            caracter = fgetc( fin ); //citeste spatiu
            numarcuvinte++;
        }
        if( caracter == ' '){
            numarcuvinte++;
        }
        caracter = fgetc( fin ); //citeste urmatoarea litera
    }
    fclose( fin );
    fout = fopen( "cuvinte.out", "w" );
    fprintf( fout, "%d", numarcuvinte );
    fclose( fout );
    return 0;
}