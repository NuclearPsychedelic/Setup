#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fin, *fout;
    int n;
    fin = fopen( "fgetc.in", "r" );
    n = fgetc( fin );
    fclose( fin );
    fout = fopen( "fgetc.out", "w" );
    fprintf( fout, "%d", n );
    fclose( fout );

    return 0;
}