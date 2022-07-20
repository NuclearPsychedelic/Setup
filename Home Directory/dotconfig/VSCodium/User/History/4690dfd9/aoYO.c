#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int k;
    char caracter;
    
    fin = fopen( "cezark.in", "r" );
    fout = fopen( "cezark.out", "w" );
    fscanf( fin, "%d", &k );
    caracter = fgetc( fin ); //pentru sfarsitul de linie
    caracter = fgetc( fin );
    caracter = (caracter - 'a')%26 + 'a' +k;
    fputc( caracter, fout );
    while( caracter != '\n' ){
        caracter = fgetc( fin );
        caracter = (caracter - 'a')%26 + 'a' +k;
        fputc( caracter, fout );
    }

    fclose( fin );
    fclose( fout );
    return 0;
}