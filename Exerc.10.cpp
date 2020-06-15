#include <iostream>

using namespace std;

int main()
{
    int idade=0, contribuicao=0;
    cout << "Favor informar sua idade: ";
    cin >> idade;

    cout << "\nFavor informar o tempo de contribuicao: ";
    cin >> contribuicao;

    if (((idade<65)||(idade>110))&&((contribuicao<35)||(contribuicao>50))) {
        cout << "\nTotalmente recusado!";
    }

    else if ((idade<65)||(idade>110)){
        cout << "\nRecusado por idade!";
    }
    else if ((contribuicao<35)||(contribuicao>50)){
        cout << "\nRecusado por contribuicao!";
    }

    else {
        cout << "\nAceito!";
    }

    return 0;
}
