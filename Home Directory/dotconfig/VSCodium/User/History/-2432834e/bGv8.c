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
    
    

    fclose( fin );
    //fout = fopen( "antiterra.out", "w" );
    //fputc( caracter, fout );
    fprintf( fout, "%d", suma );
    fclose( fout );
    return 0;
}
