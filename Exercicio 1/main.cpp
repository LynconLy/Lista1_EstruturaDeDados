#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome[10];

    int achei = 0;
    char nomeverificar;
    string nome_escolhido;

    for(int i = 1; i < 10; i++)
    {
        cout << "Entre com o nome: ";
        cin >> nome[i];
    }

    cout << "Informe um nome para verificar se foi digitado entre os 10 antes informados: ";
    cin >> nome_escolhido;

    for(int i = 1; i < 10; i++)
    {
        if(nome_escolhido == nome[i])
        {
            achei = achei + 1;
        }
    }

    if(achei == 1)
    {
        cout << "Achei";
    }
    else
    {
        cout << "Não encontrei";
    }
}
