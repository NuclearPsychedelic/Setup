#include <stdio.h>
#include <stdlib.h>

int v[10];
int main()
{
    FILE *fin, *fout;
    int n, i, cifra;

    fin = fopen( "maxnr.in", "r" );
    fscanf( fin, "%d", &n );

    while( n > 0 ){
        cifra = n%10;
        v[cifra]++;
        n = n/10;
    }
    /*
    for( i = 0; i < 10; i++ ){
        printf( "%d", v[i] );
    }
    */

    fclose( fin );
    fout = fopen( "maxnr.out", "w" );

    for( i = 9; i >= 0; i-- ){
        while( v[i] > 0 ){
            fprintf( fout, "%d", i );
            v[i]--;
        }
    }
    fclose( fout );
    return 0;
}