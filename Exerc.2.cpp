#include <iostream>
using namespace std;

int main()
{
    int x=0 , y=0, z=0;

    cout << "Informe o valor de x: ";
    cin >> x;

    cout << "\nInforme o valor de y: ";
    cin >> y;

    cout << "\nInforme o valor de z: ";
    cin >> z;
        //Maior numero
    if ((x>y)&&(x>z)){
        cout << "O maior numero sera x.";
    }
    if ((y>x)&&(y>z)) {
        cout << "O maior numero sera y.";
    }
    if ((z>x)&&(z>y)) {
        cout << "O maior numero sera z.";
    }

        //Menor numero
    if ((x<y)&&(x<z)){
        cout << "\nO menor numero sera x.";
    }
    if ((y<x)&&(y<z)) {
        cout << "\nO menor numero sera y.";
    }
    if ((z<x)&&(z<y)) {
        cout << "\nO menor numero sera z.";
    }

    return 0;
}
