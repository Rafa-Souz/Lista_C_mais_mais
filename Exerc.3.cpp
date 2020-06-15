#include <iostream>

using namespace std;

int main()
{

    float x=0;

    cout << "Informe o numero: ";
    cin >> x;

    if (x<100){
        cout << "\nX sendo menor que 100 sera dado o valor de: " << x/3 << endl;
    }

    else if (x>100) {
        cout << "\nX sendo maior que 100 sera dado o valor de: " << x*(x/2) << endl;
    }

    return 0;
}
