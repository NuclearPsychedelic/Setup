#include <stdio.h>
#include <stdlib.h>

int v[10];
int main()
{
    FILE *fin, *fout;
    int n, i, maxx, nrcifre, nrc, cifra;

    fin = fopen( "maxnr.in", "r" );
    fscanf( fin, "%d", &n );
    nrc = n;

    while( nrc > 0 ){
        nrcifre++;
        nrc = n/10;
    }

    while( n > 0 ){
        cifra = n%10;
        v[cifra]++;
        n = n/10;
    }

    fclose( fin );
    fout = fopen( "maxnr.out", "w" );
    
    for( i = 9; i <= 0; i-- ){
        while( v[i] > 0 ){
            fprintf( fout, "%d", i );
            v[i]--;
        }
    }
    return 0;
}