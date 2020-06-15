#include <iostream>

using namespace std;

int main()
{
    int ano=0;

    cout << "Favor informar o ano: ";
    cin >> ano;

    if (ano%400==0){
        cout << "O ano sera bissexto.";
    }
    else if ((ano%4==0)&&(ano%100!=0)){
        cout << "O ano sera bissexto.";
    }
    else{

        cout << "Este ano nao sera bissexto." << endl;
    }
    return 0;
}
