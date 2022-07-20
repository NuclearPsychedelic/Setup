#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fin, *fout;
    int n, i;
    char c;
    fin = fopen( "sumacifre.in", "r" );
    fscanf( fin, "%d", &n );
    c = fgetc( fin );
    for( i = 0; i < n; i++ ){
        c = fgetc( fin );
        
    }

    return 0;
}