#include <iostream>

using namespace std;

int main()
{
    int Num1=0, Num2=0, Num3=0;

    cout << "Digite respectivamente o primeiro, segundo e terceiro numero!" << endl;
    cin >> Num1;
    cin >> Num2;
    cin >> Num3;

        //Valor em ordem crescente.
    if ((Num1<Num2)&&(Num2<Num3)){
        cout << "A ordem crescente sera de: "<<Num1<< ", "<<Num2<<", "<< Num3<<endl;
    }
    if ((Num1<Num3)&&(Num3<Num2)){
        cout << "A ordem crescente sera de: "<<Num1<< ", "<<Num3<<", "<< Num2<<endl;
    }
    if ((Num2<Num1)&&(Num1<Num3)){
        cout << "A ordem crescente sera de: "<<Num2<< ", "<<Num1<<", "<< Num3<<endl;
    }
    if ((Num2<Num3)&&(Num3<Num1)){
        cout << "A ordem crescente sera de: "<<Num2<< ", "<<Num3<<", "<< Num1<<endl;
    }
    if ((Num3<Num1)&&(Num1<Num2)){
        cout << "A ordem crescente sera de: "<<Num3<< ", "<<Num1<<", "<< Num2<<endl;
    }
    if ((Num3<Num2)&&(Num2<Num1)){
        cout << "A ordem crescente sera de: "<<Num3<< ", "<<Num2<<", "<< Num1<<endl;
    }

        //Valor em ordem decrescente.
    if ((Num1>Num2)&&(Num2>Num3)){
        cout << "A ordem decrescente sera de: "<<Num1<< ", "<<Num2<<", "<< Num3<<endl;
    }
    if ((Num1>Num3)&&(Num3>Num2)){
        cout << "A ordem decrescente sera de: "<<Num1<< ", "<<Num3<<", "<< Num2<<endl;
    }
    if ((Num2>Num1)&&(Num1>Num3)){
        cout << "A ordem decrescente sera de: "<<Num2<< ", "<<Num1<<", "<< Num3<<endl;
    }
    if ((Num2>Num3)&&(Num3>Num1)){
        cout << "A ordem decrescente sera de: "<<Num2<< ", "<<Num3<<", "<< Num1<<endl;
    }
    if ((Num3>Num1)&&(Num1>Num2)){
        cout << "A ordem decrescente sera de: "<<Num3<< ", "<<Num1<<", "<< Num2<<endl;
    }
    if ((Num3>Num2)&&(Num2>Num1)){
        cout << "A ordem decrescente sera de: "<<Num3<< ", "<<Num2<<", "<< Num1<<endl;
    }



    return 0;
}
