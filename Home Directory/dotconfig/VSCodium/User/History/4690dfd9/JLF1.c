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
    while( caracter != '\n' ){
        caracter = (caracter - 'a' + k )%26 + 'a';
        fputc( caracter, fout );
        caracter = fgetc( fin );
    }

    fclose( fin );
    fclose( fout );
}
/*
while( caracter != '\n' ){
        caracter = fgetc( fin );
        caracter = (caracter - 'a')%26 + 'a' +k;
        fputc( caracter, fout );
    }
    */