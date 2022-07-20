#include <stdio.h>
#include <stdlib.h>

int v[10000];

int main()
{
    FILE *fin, *fout;
    int n, i, maxx, divizor, prim;
    maxx = 1;

    fin = fopen( "numere1.in", "r" );
    for( i = 0; i < n; i++ ){
        fscanf( fin, "%d", v[i] );
        if( v[i] > maxx ){
            maxx = v[i];
        }
    }
    int p[maxx/2];
    p[0] = 0;
    p[1] = 0;
    p[2] = 1;
    for( i = 3; i < maxx/2; i++ ){
        divizor = 2;

        for( divizor = 2; divizor < i/2; divizor ++ ){
            if( i % divizor == 0 ){
                p[i] = 0;
            }else{ 
                p[i] = 1;
            }
        }
    }
    for( i = 0; i < maxx/2; i++ ){

    }
    
    
}