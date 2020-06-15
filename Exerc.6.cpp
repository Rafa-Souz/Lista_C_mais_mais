#include <iostream>

using namespace std;

int main()
{

    int Identf=0;
    float Venda=0, valorReajustado=0;
    string ResultReajuste;

    cout << "Favor informar numero de identificacao do vendedor: ";
    cin >> Identf;


    switch (Identf){

        case 123:

            cout << "Informe o valor da venda:\n";
            cin >> Venda;
            if (Venda<1000){
            ResultReajuste = "nao havera reajuste, totalizando o mesmo com o valor de: R$";
            }
            else if ((Venda>=1000)&&(Venda<1500)){
            valorReajustado = (Venda*(12.5/100));
            ResultReajuste = "ganhara reajuste de 12,5%, totalizando: R$";
            }
            else if ((Venda>=1500)&&(Venda<2000)){
            valorReajustado = (Venda*(15.33/100));
            ResultReajuste = "ganhara reajuste de 15.33%, totalizando: R$";
            }
            else if (Venda>=2000){
            valorReajustado = (Venda*(18.47/100));
            ResultReajuste = "ganhara reajuste de 18.47%, totalizando: R$";
            }
            cout<< "\nO funcionario com codigo "<< Identf<< ", "<<ResultReajuste<< valorReajustado<< " a mais." <<endl;

        default:
            cout << "O numero do vendedor nao consta no sistema.";
    }


    return 0;
}
