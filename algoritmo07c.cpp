#include <iostream>
#include <string>

using namespace std;

int main ()
{
    float nota1, nota2, resultado;

    cout << "CEAPS" << endl;
    cout << "Qual a nota da primeira prova?" << endl;
    cin >> nota1;
    cout << "Qual a nota da segunda prova?" << endl;
    cin >> nota2;

    resultado = nota1 + nota2;

    if (resultado / 2 >= 7)
    {
        cout << "APROVADO" << endl;
    }
    else
    {
        cout << "REPROVADO" << endl;
    }

    system ("pause");
    return 0;
}