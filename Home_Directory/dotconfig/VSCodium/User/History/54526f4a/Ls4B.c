#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fin, *fout;
    int n;
    fin = fopen( "fgetc.in", "r" );
    n = fgetc( fin );
    fout = fopen( "fgetc.out", "w" );
    while( c != '\n' ){
        
    }
    fclose( fin );
    
    fclose( fout );
    printf( "%d", n );

    return 0;
}