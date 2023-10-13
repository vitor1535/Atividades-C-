#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int anoAtual, anoNascimento, resultado;

    cout << "Qual o ano atual?" << endl;
    cin >> anoAtual;
    cout << "Qual ano voce nasceu?" << endl;
    cin >> anoNascimento;

    resultado = anoAtual - anoNascimento;

    if (resultado >= 18)
    {
        cout << "Pode dirigir";
    }
    else
    {
        cout << "Nao pode dirigir";
    }

    system ("pause");
    return 0;
}