#include <iostream>
#include <locale>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "PORTUGUESE");
    
    int diasAno = 365;
    float tempMed[diasAno];
    float menorTemp = 9999;
    float maiorTemp = -9999;
    float tempMedia = 0;
    int InfMedia = 0;
    
    for (int i = 0; i < diasAno; i++) 
    {
        cout << "Digite a temperatura média do dia " << i+1 << ": ";
        cin >> tempMed[i];
        
        if (tempMed[i] < menorTemp) 
        {
            menorTemp = tempMed[i];
        }
        
        if (tempMed[i] > maiorTemp)
        {
            maiorTemp = tempMed[i];
        }
        
        tempMedia += tempMed[i];
    }
    
    tempMedia /= diasAno;
    
    for (int i = 0; i < diasAno; i++)
    {
        if (tempMed[i] < tempMedia)
        {
            InfMedia++;
        }
    }
    
    cout << "Menor temperatura do ano: " << menorTemp << endl;
    cout << "Maior temperatura do ano: " << maiorTemp << endl;
    cout << "Temperatura média anual: " << tempMedia << endl;
    cout << "Número de dias no ano em que a temperatura foi inferior à média anual: " << countInfMedia << endl;
    
    return 0;
}
