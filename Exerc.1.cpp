#include <iostream>

using namespace std;

int main()
{
    float Gasolina=0, DistanciaKm=0, Desemp=0, ValPedagio=0, QuantPedagio=0, ValTotal=0;

    cout << "Favor, informar valor medio da gasolina, distância em km e desempenho do carro com relação ao consumo.";

    cout << "\nGasolina em R$: ";
    cin >> Gasolina;

    cout << "\nDistacia em Km: ";
    cin >> DistanciaKm;

    cout << "\nDesempenho do veiculo (km/litro): ";
    cin >> Desemp;

    cout << "\nValor de cada pedagio em R$: ";
    cin >> ValPedagio;

    cout << "\nQuantos pedagios: ";
    cin >> QuantPedagio;

    ValTotal = ((DistanciaKm/Desemp)*Gasolina)+(ValPedagio*QuantPedagio);

    cout << "\nO valor total da viagem sera de: " << "R$" << ValTotal << endl;

    return 0;
}
