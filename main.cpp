#include <iostream>

using namespace std;

int main()
{
    double ValorProduto;
    double Desconto;
    double valordesconto;
    double valorfinal;

    cout << "Valor do produto: " << endl;
    cin >> ValorProduto;
    while (ValorProduto <= 0) {
        cout << "Valor invalido! \n";
        cout << "Digite novamente o valor: \n";
        cin >> ValorProduto;

    }

       cout << "Valor de desconto: " << endl;
    cin >> Desconto;
    while (Desconto > 100 || Desconto < 0) {
        cout << "Desconto invalido \n";
        cout << "Digite novamente o desconto: \n";
        cin >> Desconto;
    }

           valordesconto = ((Desconto/100) * ValorProduto);
    valorfinal = (ValorProduto - valordesconto);
    cout << "O preco final do produto e: R$" << valorfinal << endl;
    cout << "Valor do desconto foi de: R$" << valordesconto << endl;




    return 0;
}
