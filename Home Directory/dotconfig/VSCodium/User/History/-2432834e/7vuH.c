#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int numar, suma;
    char caracter;
    numar = 0;
    suma = 0;

    fin = fopen( "antiterra.in", "r" );
    fout = fopen( "antiterra.out", "w" );

    caracter = fgetc( fin );
    
    while( caracter != '\n' ){
        fscanf( fin, "%d", &numar );
        caracter = fgetc( fin );
        if( caracter == '-' ){
            caracter = fgetc( fin );
            numar = numar * (-1);
        }
        if( caracter == '+' ){
            caracter = fgetc( fin );
        }

        suma = suma + numar;
    }

    fclose( fin );
    //fout = fopen( "antiterra.out", "w" );
    //fputc( caracter, fout );
    fprintf( fout, "%d", suma );
    fclose( fout );
    return 0;
}
