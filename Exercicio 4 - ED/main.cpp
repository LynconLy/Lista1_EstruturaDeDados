#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    int tam = 20;
    int vetor[tam];

    cout << "Digite 20 números (com espaços entre eles):\n";

    for (int i = 0; i < tam; i++)
    {
        cin >> vetor[i];
    }

    cout << "\nOrdem Inversa:\n";

    for (int i = tam - 1; i >= 0; i--)
    {
        cout << vetor[i] << " ";
    }

    cout << endl;

    return 0;
}
