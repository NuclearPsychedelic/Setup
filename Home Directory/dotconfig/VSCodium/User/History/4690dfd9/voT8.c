#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int k;
    char caracter;
    
    fin = fopen( "cezark.in", "r" );
    fscanf( fin, "%d", &k );
    caracter = fgetc( fin ); //pentru sfarsitul de linie
    caracter = fgetc( fin );
    caracter = (caracter - 'a')%26 + 'a' +k;

    fclose( fin );
    fout = fopen( "cezark.out", "w" );
    fputc( caracter, fout ); 
    fclose( fout );
    return 0;
}