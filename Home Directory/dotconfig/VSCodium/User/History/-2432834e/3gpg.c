#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int numar, suma, count;
    char caracter;
    numar = 0;
    suma = 0;
    count = 0 ;

    fin = fopen( "antiterra.in", "r" );
    fout = fopen( "antiterra.out", "w" );

    caracter = fgetc( fin );
    while( caracter != '\n' ){
        numar = 0;
        while( caracter != ' ' && caracter != '+' && caracter != '-' && count < 20 ){
            numar = numar*10+(caracter - '0');
            printf("%c ", caracter);
            caracter = fgetc( fin );
            count++;
        }
        if( caracter == '-' ){
            numar = numar * (-1);
            caracter = fgetc( fin ); //citeste spatiu
        }else if( caracter == '+' ){
            caracter = fgetc( fin ); //citeste spatiu
        }
        caracter = fgetc( fin ); //citeste urmatoarea cifra pentru a putea intra iar in while */
        //fputc( caracter, fout );
        //printf( "%d", numar );
        suma = suma + numar;
    }
    fclose( fin );
    //fout = fopen( "antiterra.out", "w" );
    //fputc( caracter, fout );
    fprintf( fout, "%d", suma );
    fclose( fout );
    return 0;
}
