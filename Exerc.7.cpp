#include <iostream>

using namespace std;

int main()
{
    string TipoDeMedia;
    float num1=0, num2=0, num3=0, num4=0, num5=0, Media=0, peso1=0, peso2=0, peso3=0, peso4=0, peso5=0;

    cout << "Favor digitar 'simples' para uma media simples ou 'ponderada' para uma media ponderada. " << endl;
    cin >> TipoDeMedia;

    if (TipoDeMedia=="simples"){
        cout << "\nFavor informar os cinco numeros para a media \n";
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        Media = (num1+num2+num3+num4+num5)/5;
        cout << "\nA media simples sera igual a:\n" << Media << endl;

    }
    else if (TipoDeMedia=="ponderada"){
        cout << "\nFavor informar os cinco numeros para a media \n";
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        cout << "\nFavor informar os pesos dos respectivos 5 digitos: ";
        cin >> peso1 >> peso2 >> peso3 >> peso4 >> peso5;
        Media = ((num1*peso1)+(num2*peso2)+(num3*peso3)+(num4*peso4)+(num5*peso5))/(peso1+peso2+peso3+peso4+peso5);
        cout << "\nA media ponderada sera igual a: " << Media << endl;

    }
    else{
        cout << "Favor, selecionar somente as sentencas 'simples' ou 'ponderada'!";
    }

    return 0;
}
