#include <iostream>
# include <iomanip>
using namespace std;

int main()
{
    double ValorProduto;
    double Desconto;
    double valordesconto;
    double valorfinal;
    int opcao = -1;

    while(opcao !=0){
    cout << "========== MATHHUB ==========" << endl;
    cout << "1 - Calcular desconto" << endl;
    cout << "0 - Sair" << endl;
    cout << "============================" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    if(opcao == 1){
        cout << "Iniciando calculadora de descontos"<< endl;
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

    cout << fixed << setprecision(2);
    cout << "O preco final do produto e: R$" << valorfinal << endl;
    cout << "Valor do desconto foi de: R$" << valordesconto << endl;
    }
    else if (opcao == 0){
        cout << "Encerrando o MathHUB " << endl;
    }
    }
    return 0;
}
