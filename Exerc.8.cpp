#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int NumProduto=0;
    float quantidade=0, valorProduto1=0, valorProduto2=0;
    cout << "Informe o numero do produto: \n";
    cin >> NumProduto;

    switch(NumProduto){
        case 01:
            cout << "Informe a quantidade comprada: \n";
            cin >> quantidade;
            if (quantidade<=200){
                valorProduto1 = quantidade*(5.50);
                cout << "O valor do produto 1 sera de : R$" << valorProduto1<<"." << endl;
            }
            else {
                valorProduto1 = quantidade * (5.5*(1-(8/100)));
                cout << "O valor do produto 1 sera de : R$" << valorProduto1 <<"."<< endl;
            }
        case 02:
            cout << "Informe a quantidade comprada: \n";
            cin >> quantidade;
            if (quantidade<=200){
                valorProduto2 = quantidade*(3.9);
                cout << "O valor do produto 2 sera de : R$" << valorProduto2 <<"."<< endl;
            }
            else {
                valorProduto2 = quantidade * (3.9*(1-(10.5/100)));
                cout << "O valor do produto 2 sera de : R$" << valorProduto2 <<"."<< endl;
            }

    }
    return 0;
}
