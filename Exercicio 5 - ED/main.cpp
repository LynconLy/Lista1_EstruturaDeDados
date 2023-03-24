#include <iostream>

using namespace std;

int main()
 {
    int n;
    cout << "Digite o tamanho dos vetores: ";
    cin >> n;

    int vetorA[n], vetorB[n], vetorSoma[n];

    // Leitura do vetor A
    cout << "Digite os elementos do vetor A:\n";
    for (int i = 0; i < n; i++) {
        cin >> vetorA[i];
    }

    // Leitura do vetor B
    cout << "Digite os elementos do vetor B:\n";
    for (int i = 0; i < n; i++) {
        cin >> vetorB[i];
    }

    // Soma dos vetores A e B
    for (int i = 0; i < n; i++) {
        vetorSoma[i] = vetorA[i] + vetorB[i];
    }

    // Impressão do vetor Soma
    cout << "A soma dos vetores A e B é:\n";
    for (int i = 0; i < n; i++) {
        cout << vetorSoma[i] << " ";
    }
    cout << endl;

    return 0;
}
