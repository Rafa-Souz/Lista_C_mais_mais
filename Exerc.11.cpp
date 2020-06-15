#include <iostream>

using namespace std;

int main()
{
    int digito1=0, digito2=0, digito3=0;

    cout << "Favor informar os tres digitos para comparacao!" << endl;
    cin >> digito1 >> digito2 >> digito3;


    if ((digito1%2==0)||(digito2%2==0)||(digito3%2==0)){
        cout << "Seram pares os digitos: ";
        if (digito1%2==0){
            cout << digito1;
        }
        if (digito2%2==0){
            cout <<" "<< digito2<<endl;
        }
        if (digito3%2==0){
            cout <<" " << digito3 << endl;
        }

    }

    if ((digito1%2!=0)||(digito2%2!=0)||(digito3%2!=0)){
        cout << "Seram impares os digitos: ";
        if (digito1%2!=0){
            cout << digito1;
        }
        if (digito2%2!=0){
            cout <<" "<< digito2<<endl;
        }
        if (digito3%2!=0){
            cout <<" " << digito3 << endl;
        }

    }

    if ((digito1>=0)||(digito2>=0)||(digito3>=0)){
        cout << "Seram positivos os digitos: ";
        if (digito1>=0){
            cout << digito1;
        }
        if (digito2>=0){
            cout <<" "<< digito2<<endl;
        }
        if (digito3>=0){
            cout <<" " << digito3 << endl;
        }

    }

    if ((digito1<0)||(digito2<0)||(digito3<0)){
        cout << "Seram negativos os digitos: ";
        if (digito1<0){
            cout << digito1;
        }
        if (digito2<0){
            cout <<" "<< digito2<<endl;
        }
        if (digito3<0){
            cout <<" " << digito3 << endl;
        }

    }

    return 0;
}
