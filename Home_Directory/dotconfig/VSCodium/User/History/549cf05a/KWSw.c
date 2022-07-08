#include <stdio.h>
#include <stdlib.h>

int v[10];
int main()
{
    FILE *fin, *fout;
    int n, i, maxx, nrcifre, nrc;

    fin = fopen( "maxnr.in", "r" );
    fscanf( fin, "%d", &n );
    nrc = n;

    while( nrc > 0 ){
        nrcifre++;
        nrc = n/10;
    }

    for( i = 0; i < n; i++ ){
        
    }
}