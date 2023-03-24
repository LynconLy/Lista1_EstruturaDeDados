#include <iostream>
#include <locale>

using namespace std;

int main() 
{
    setlocale(LC_ALL,"PORTUGUESE");
    
    int numAlunos = 20;
    float notas[numAlunos];
    float media = 0;
    int countAcimaMedia = 0;
    
    for (int i = 0; i < numAlunos; i++) 
    {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        media += notas[i];
    }
    
    media /= numAlunos;
    
    for (int i = 0; i < numAlunos; i++)
    {
        if (notas[i] > media) 
        {
            countAcimaMedia++;
        }
    }
    
    cout << "Média da turma: " << media << endl;
    cout << "Número de alunos com nota acima da média: " << countAcimaMedia << endl;
    
    return 0;
}
