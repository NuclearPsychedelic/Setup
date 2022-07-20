#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int numar, suma;
    char caracter;
    numar = 0;
    suma = 0;
    
    fin = fopen( "antiterra.in", "r" );

    caracter = fgetc( fin );
    while( caracter != '\n' ){
        numar = 0;
        while( caracter != ' ' && caracter != '+' && caracter != '-' ){
            numar = numar*10+(caracter - '0');
            caracter = fgetc( fin );
        }
        if( caracter == '-' ){
            numar = numar * (-1);
            caracter = fgetc( fin ); //citeste spatiu
        }else if( caracter == '+' ){
            caracter = fgetc( fin ); //citeste spatiu
            
        }
        caracter = fgetc( fin ); //citeste urmatoarea cifra pentru a putea intra iar in while
        suma = suma + numar;
    }
    return 0;
}