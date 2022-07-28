#include <iostream>
using namespace std;

void sum_cif( int n, int &suma )
{
    suma = 0;
    while( n > 0 ){
        suma = suma + n % 10;
        n = n/10;
    }
}

int main()
{
    int numar, suma;
    cin >> numar;
    sum_cif( numar, suma);
    cout << suma;
    return 0;
}