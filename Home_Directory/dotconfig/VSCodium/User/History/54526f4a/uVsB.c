#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fin, *fout;
    int n;
    fin = fopen( "fgetc.in", "r" );
    n = fgetc( fin );
    fout = fopen( "fgetc.out", "w" );
    while( n != '\n' ){
        fprintf( fout, "%c", n );
        n = fgetc( fin );
    }

    fclose( fin );
    fclose( fout );
    printf( "%c", n );

    return 0;
}