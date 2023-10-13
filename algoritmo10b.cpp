#include <iostream>
#include <string>

using namespace std;

int main ()
{
    char sexo, resposta;
    int idade, cabelo, contHomem = 0, contMulher = 0;

    do
    {    
        cout << "---------------------" << endl;
        cout << "SELETOR DE PESSOAS" << endl;
        cout << "---------------------" << endl;
        cout << "Qual o sexo? [M/F]";
        cin >> sexo;
        cout << "Qual a idade?";
        cin >> idade;
        cout << "Qual a cor do cabelo?" << endl;
        cout << "---------------------" << endl;
        cout << "[1] Preto" << endl;
        cout << "[2] Castanho" << endl;
        cout << "[3] Loiro" << endl;
        cout << "[4] Ruivo" << endl;
        cin >> cabelo;
        cout << "Quer continuar? [S/N]" << endl;
        cin >> resposta;

        if (sexo == 'M' || sexo == 'm' && idade > 18 && cabelo == 2)
        {
            contHomem++;
        }

        if (sexo == 'F' || sexo == 'f' && idade >= 25 && idade <= 30 && cabelo == 3)
        {
            contMulher++;
        }
    } while (resposta != 'N' || resposta != 'n');

    cout << "Total de homens com mais de 18 e cabelos castanhos = " << contHomem << endl;
    cout << "Total de mulheres entre 25 e 30 e cabelos loiros = " << contMulher << endl;

    system ("pause");
    return 0;
}