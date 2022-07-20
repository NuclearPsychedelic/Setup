#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int n, i, nrlitere, nrcifre;
    char c;
    nrlitere = 0;
    nrcifre = 0;

    fin = fopen( "numchar.in", "r" );
    fscanf( fin, "%d", &n );
    c = fgetc( fin );
    c = fgetc( fin );
    for( i = 0; i < n; i++ ){
        c = fgetc( fin );
        if( 0 <= c && c <= 9 ){

        }
    }

    return 0;
}