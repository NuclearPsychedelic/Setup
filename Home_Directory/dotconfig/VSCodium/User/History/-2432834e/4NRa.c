#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int numar, suma;
    char caracter;
    numar = 0;
    
    fin = fopen( "antiterra.in", "r" );

    caracter = fgetc( fin );
    while( caracter != '\n' ){
        while( caracter != ' ' && caracter != '+' && caracter != '-' ){
            numar = numar*10+(caracter - '0');
            caracter = fgetc( fin );
        }
        if( caracter == '-' ){
            numar = numar * (-1);
            caracter = caracter( fin );
        }else if( caracter == '+' ){
            caracter = fgetc( fin );
            caracter = fgetc( fin );
            caracter = fgetc( fin );
        }else{
            caracter = fgetc( fin )
        }
    }
    return 0;
}